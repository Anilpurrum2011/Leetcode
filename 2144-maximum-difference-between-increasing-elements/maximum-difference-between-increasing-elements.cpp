class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int res;
        for(int i=0;i<n;i++)
        { 
            for(int j=1;j<n;j++){
            if(nums[j]>nums[i] && j>i){
                res=max(res,nums[j]-nums[i]);
            }
          }
        }
        if(res>0){
            return res;
        }
        return -1;
    }
};