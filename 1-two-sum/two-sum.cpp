// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int t=nums.size();
//         for(int i=0;i<t-1;i++){
//             for(int j=i+1;j<t;j++){
//                 if(nums[i]+nums[j]==target){
//                     return {i,j};
//                 }
//             }
//         }
//         return {} ;
        
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int  n=nums.size();
     unordered_map<int,int>maps;
     for(int i=0;i<n;i++){
        maps[nums[i]]=i;
     }
     for(int i=0;i<n;i++){
        int sub=target-nums[i];
        if(maps.count(sub)&& maps[sub]!=i){
            return {i,maps[sub]};
        }
     }
     return {};
    }
};
