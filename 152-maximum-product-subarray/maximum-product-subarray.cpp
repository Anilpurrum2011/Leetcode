// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         double pref=1,suf=1;
//         double ans=INT_MIN;
//         int a=nums.size();
//         for(int i=0;i<a;i++){
//             if(pref==0)pref=1;
//             if(suf==0)suf=1;
//             pref=pref*nums[i];
//             suf=suf*nums[a-i-1];
//             ans=max(ans,max(pref,suf));
//         }
//         return ans;
//     }
// };


class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int n=nums.size();
    int pre=1,suf=1;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(pre==0)pre=1;
        if(suf==0)suf=1;
        pre=pre*nums[i];
        suf=suf*nums[n-i-1];
        ans=max(ans,max(pre,suf));
    }
    return ans;
    }
};