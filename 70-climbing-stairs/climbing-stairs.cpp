// class Solution {
// public:
//     int climbStairs(int n) {
//          if(n==0 || n==1){
//             return 1;
//          }
//          vector<int>dp(n+1);
//          dp[0]=dp[1]=1;
//          for(int i=2;i<n+1;i++){
//             dp[i]=dp[i-1]+dp[i-2];
//          }
//          return dp[n];
//     }
// };





// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n==0 || n==1){
//             return 1;
//         }
//         vector<int>dp(n+1,0);
//         dp[0]=dp[1]=1;
//         for(int i=2;i<n+1;i++){
//             dp[i]=dp[i-1]+dp[i-2];
//         }
//         return dp[n];
//     }
// };


// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n==0 || n==1){
//             return 1;
//         }
//         int first=1,second=1;
//         int total;
//         for(int i=2;i<n+1;i++){
//             total=first+second;
//             first=second;
//             second=total;
//         }
//        return total;
//     }
// };

class Solution {
public:
    int climbStairs(int n) {
    int l=0;
    int f=1;
    int res=0;
    if(n==0 || n==1){
        return 1;
    }
    for(int i=0;i<n;i++){
         res=l+f;
         l=f;
         f=res;
    }
    return res;
    }
};


