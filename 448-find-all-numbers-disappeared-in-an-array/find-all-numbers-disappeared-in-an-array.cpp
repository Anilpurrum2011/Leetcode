class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>res;
        set<int>sets(nums.begin(),nums.end());
        for(int i=1;i<=n;i++){
            if(sets.find(i)==sets.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};