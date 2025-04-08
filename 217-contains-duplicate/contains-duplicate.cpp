// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         set<int>sets;
//         for(int i=0;i<nums.size();i++){
//             sets.insert(nums[i]);
//         }
//         if(nums.size()==sets.size()){
//             return false;
//         }
//         return true;
//     }
// };

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//     unordered_map<int,int>maps;
//     for(int num:nums){
//         if(maps[num]>=1){
//             return true;
//         }
//         maps[num]++;
//     }
//     return false;

//     }
// };


// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//     set<int>sets(nums.begin(),nums.end());
//     if(sets.size()==nums.size()){
//         return false;
//     }
//     return true;
//     }
// };


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_map<int,int>maps;
    for(int i=0;i<nums.size();i++){
        maps[nums[i]]++;
    }
    for(int i=0;i<maps.size();i++){
        if(maps[nums[i]]>1){
            return true;
        }
    }
    return false;
    }
};