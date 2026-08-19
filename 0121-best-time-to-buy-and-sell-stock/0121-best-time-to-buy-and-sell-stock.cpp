class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minv=prices[0];int profit=0;
        for(int i=1;i<prices.size();i++){
            minv=min(prices[i],minv);
            profit=max(profit,prices[i]-minv);
        }
        return profit;
    }
};