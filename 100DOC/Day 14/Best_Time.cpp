class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int low =prices[0];
        int total = INT_MIN;
        
        for(int i=0;i<prices.size();i++){
            low = min(low,prices[i]);
            total = max(prices[i]-low, total);
        }
        return total;
        
    }
};