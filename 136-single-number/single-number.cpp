// class Solution {
// public:
//     int singleNumber(vector<int>& nums) { 
//        sort(nums.begin(),nums.end());
//        int a=nums.size();
//         for(int i=1;i<a;i+=2)
//         {
//             if(nums[i]!=nums[i-1])
//                 return nums[i-1];
//         }
//         return nums[a-1];
//     }
// };


class Solution {
public:
    int singleNumber(vector<int>& nums) { 
     unordered_map<int,int>maps;
     for(int num:nums){
        maps[num]++;
     }
     for(auto c:maps){
        if(c.second==1){
            return c.first;
        }
     }
     return 0;
    }
};