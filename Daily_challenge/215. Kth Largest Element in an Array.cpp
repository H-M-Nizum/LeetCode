class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i:nums){
            pq.push(i);
        }
        while(!pq.empty()){
            k--;
            if(k==0){
                return pq.top();
            }
            pq.pop();
        }
        return -1;
    }
};