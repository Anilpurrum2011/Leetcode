// class Solution {
// public:
//     vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//        int n=nums.size();
//        vector<int>res;
//        for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(nums[i]>nums[j]){
//                 count++;
//             }
//         }
//         res.push_back(count);
//        }
//        return res;
//     }
// };


class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    int  n=nums.size();
    unordered_map<int,int>maps;
    vector<int>res=nums;
    sort(res.begin(),res.end());
    for(int i=n-1;i>=0;i--){
        maps[res[i]]=i;
    }
    for(int i=0;i<n;i++){
        nums[i]=maps[nums[i]];
    }
    return nums;
    }
};