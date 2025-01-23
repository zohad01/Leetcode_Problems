class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0, bestbuy = prices[0];
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] > bestbuy){
                maxprofit = max(maxprofit,prices[i] - bestbuy);
            }
            bestbuy = min(bestbuy, prices[i]);
        }
        return maxprofit;



        // int max = 0;
        // int minprice = INT_MAX;
        // for(int i = 0; i < prices.size(); i++){
        //     if(prices[i] < minprice){
        //         minprice = prices[i];
        //     }
        //     else if(prices[i] - minprice > max){
        //         max = prices[i] - minprice;
        //     }
        // }
        // return max;
    }
};