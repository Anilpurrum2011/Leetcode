class Solution {
public:
    int anil(vector<int>&nums){
        int maxele=nums[0];
        int maxfre=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxele) maxfre++;
            else maxfre--;
            if(maxfre==0){
                maxele=nums[i];
                maxfre=1;
            }
        }
        return maxele;
    }
    int minimumIndex(vector<int>& nums) {
        int n=nums.size();
        int maxele=anil(nums);
        int maxcount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==maxele){
                maxcount++;
            }
        }
        int precount=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==maxele){
                precount++;
                maxcount--;
            }
            if((precount>(i+1)/2) && (maxcount>(n-i-1)/2)){
                return i;
            }
        }
        return -1;
    }
};