// // nested loop
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         for(int i=0; i<n-1; i++){
//             for(int j=i+1; j<n; j++){
//                 if(nums[i]+nums[j] == target){
//                     return {i, j};
//                 }
//             }
//         }
//         return {-1, -1};
//     }
// };

// // use map
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         unordered_map<int, int> m;
//         for(int i=0; i<n; i++){
//             int x = nums[i];
//             int y = target - x;
//             if(m.find(y)!=m.end()){
//                 return {i, m[y]};
//             }
//             m[nums[i]] = i;
//         }
//         return {-1, -1};
//     }
// };

// // use pair vector (value and index)
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         vector<pair<int, int>> v;
//         for(int i=0; i<n; i++){
//             v.push_back({nums[i], i});
//         }
//         sort(v.begin(), v.end());
//         int l=0, r=n-1;
//         while(l<r){
//             int sum = v[l].first + v[r].first;
//             if(sum == target) return {v[l].second, v[r].second};
//             else if(sum > target) r--;
//             else l++;
//         }
//         return {-1, -1};
//     }
// };