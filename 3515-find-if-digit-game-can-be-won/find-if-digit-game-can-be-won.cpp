class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n=nums.size();
        int singlesum=0;
        int doublesum=0;
        for(int i=0;i<n;i++){
            if(nums[i]<10){
                singlesum+=nums[i];
            }
            else{
                doublesum+=nums[i];
            }
        }
        if(singlesum>doublesum || doublesum>singlesum){
            return true;
        }
        return false; 
    }
};