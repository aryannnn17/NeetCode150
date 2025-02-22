// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int profit =0;
//         for(int i=0; i<prices.size();++i)
//             profit = max(profit, *max_element(prices.begin()+i,prices.end()) - prices[i]);
        
//         return profit;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int minBuy = prices[0];

        for (int& sell : prices) {
            maxP = max(maxP, sell - minBuy);
            minBuy = min(minBuy, sell);
        }
        return maxP;
    }
};
