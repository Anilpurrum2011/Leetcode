class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int n=nums.size();
        // unordered_map<int,int>maps;
        // for(int i=0;i<n;i++){
        //     maps[nums[i]]++;
        // }
        // for(auto it:maps){
        //     if(it.second==1){
        //         return it.first;
        //     }
        // }
        // return -1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i+=3){
            if(nums[i]!=nums[i-1]){
                return nums[i-1];
            }
        }
        return nums[nums.size()-1];
    }
};