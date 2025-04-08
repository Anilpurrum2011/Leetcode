class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int lastnum=INT_MIN;
        for(auto n:nums){
            if(lastnum+1<=n+k){
                ans++;
                lastnum=max(lastnum+1,n-k);
            }
        }
        return ans;
    }
};