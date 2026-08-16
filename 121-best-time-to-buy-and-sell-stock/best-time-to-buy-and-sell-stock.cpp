class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min_price=prices[0];
        int profit=0 ;
        int max_profit=INT_MIN;
        for(int i=0;i<n;i++){
            min_price=min(min_price,prices[i]);
            profit=prices[i]-min_price;
            max_profit=max(max_profit,profit);
        }
        return max_profit;
    }
};