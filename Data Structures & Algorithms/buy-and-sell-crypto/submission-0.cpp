class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buying_Price=0;
        int selling_price=1;
        int max_Profit=0;
        while(selling_price<prices.size()){
            if(prices[buying_Price]>prices[selling_price]){
                buying_Price=selling_price;
            }
            else{
                int profit=prices[selling_price]-prices[buying_Price];
                max_Profit=max(profit,max_Profit);
            }
            selling_price++;
        }
        return max_Profit;
    }
};
