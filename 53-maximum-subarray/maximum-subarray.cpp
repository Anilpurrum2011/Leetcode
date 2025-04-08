// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int a=nums.size();
//         int sum = 0;
//         int maxi = INT_MIN;
//         for(int i=0; i<a; i++){
//             sum += nums[i];
//             maxi = max(maxi,sum);
//             if(sum < 0){
//                 sum = 0;
//             }
//         }
//         return maxi;
// //     }
// // };



// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//     int n=nums.size();
//     int sum=0;
//     int maxsum=INT_MIN;
//     for(int i=0;i<n;i++){
//         sum+=nums[i];
//         maxsum=max(maxsum,sum);
//         if(sum<0){
//             sum=0;
//         }
//     }
//     return maxsum;
//     }
// };




class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int n=nums.size();
    int sum=0;
    int maxsum;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        maxsum=max(maxsum,sum);
        if(sum<0){
            sum=0;
        }
    }
    return maxsum;
    }
};