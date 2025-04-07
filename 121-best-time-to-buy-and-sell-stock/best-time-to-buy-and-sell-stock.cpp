// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int buyPrice = prices[0];
//         int profit = 0;
//         for (int i = 1; i < prices.size(); i++) {
//             if (buyPrice > prices[i]) {
//                 buyPrice = prices[i];
//             }
//             profit = max(profit, prices[i] - buyPrice);
//         }
//         return profit;        
//     }
// };



class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       int buy=prices[0];
       int profit=0;
       for(int i=1;i<n;i++){
        if(buy>prices[i]){
            buy=prices[i];
        }
        profit=max(profit,prices[i]-buy);
       }    
       return profit;
    }
};
