class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>sets;
        for(int i=0;i<nums.size();i++){
            sets.insert(nums[i]);
        }
        if(nums.size()==sets.size()){
            return false;
        }
        return true;
    }
};