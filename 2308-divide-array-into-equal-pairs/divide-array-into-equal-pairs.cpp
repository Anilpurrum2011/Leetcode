class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>maps;
        for(int num:nums){
            maps[num]++;
        }
        for(auto it:maps){
            if(it.second%2==0){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};