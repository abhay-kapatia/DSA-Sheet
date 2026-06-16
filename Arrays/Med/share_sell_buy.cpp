class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int profit = 0;
        int maxprofit = 0;
        for(auto price : prices){
            //find the minimum price to buy
            if(price < minprice){
                minprice = price;
            }else{
                // calculate the maximum profitn using that minimum price to buy
                profit = price - minprice;
                maxprofit = max(maxprofit, profit);
            }
        }
        return maxprofit;
    }
};
