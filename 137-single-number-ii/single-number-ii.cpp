class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>maps;
        for(int i=0;i<n;i++){
            maps[nums[i]]++;
        }
        for(auto it:maps){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;; 
    }
};