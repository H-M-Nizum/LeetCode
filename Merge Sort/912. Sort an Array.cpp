class Solution {
public:
    int tem[1000000];
    void margesort(int l, int r, vector<int> &nums){
        if(l==r){
            return;
        }
        int mid = l + (r-l)/ 2;

        margesort(l, mid, nums);
        margesort(mid+1, r, nums);


        int i, j, k;
        for(i=l, j=mid+1, k=l; k<=r; k++){
            if(i == mid+1){
                tem[k] = nums[j++];
            }
            else if(j == r+1){
                tem[k] = nums[i++];
            }
            else if(nums[i] < nums[j]){
                tem[k] = nums[i++];
            }
            else{
                tem[k] = nums[j++];
            }
        }
        for(k=l; k<=r; k++){
            nums[k] = tem[k];
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        margesort(0, nums.size()-1, nums);

        return nums;
    }
};