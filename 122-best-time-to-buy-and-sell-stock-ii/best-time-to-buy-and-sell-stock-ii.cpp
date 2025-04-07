// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxProfit = 0;
//         for (int i = 1; i < prices.size(); i++) {
//             if (prices[i] > prices[i - 1]) {
//                 maxProfit += prices[i] - prices[i - 1];
//             }
//         }
//         return maxProfit;
//     }
// };




class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int maxprofit=0;
    int n=prices.size();
    for(int i=1;i<n;i++){
        if(prices[i]>prices[i-1]){
            maxprofit+=prices[i]-prices[i-1];
        }
    }
    return maxprofit;
    }
};