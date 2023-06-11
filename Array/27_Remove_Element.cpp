#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[8] = {0,1,2,2,3,0,4,2};
    vector<int> nums(a, a+8);
    int val = 2;
    auto it = nums.begin();
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == val){
            nums.erase(it);
            it--;
            i--;
        }
        it++;
    }
    
    
    cout<<nums.size();

    return 0;
}

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//        auto it = nums.begin();
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i] == val){
//                 nums.erase(it);
//                 it--;
//                 i--;
//             }
//             it++;
//         }
        
        
//         return nums.size();

//     }
// };