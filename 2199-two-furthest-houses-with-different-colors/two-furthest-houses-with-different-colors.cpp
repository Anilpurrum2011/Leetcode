class Solution {
public:
    int maxDistance(vector<int>& nums) {
        int n=nums.size();
        int dist=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=nums[0])
              dist=max(dist,i);
            if (nums[i]!= nums[n - 1])
              dist= max(dist, n - 1 - i);
        }
        return dist;
    }
};