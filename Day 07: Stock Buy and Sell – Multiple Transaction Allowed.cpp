class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int profit = 0;
        int n = prices.size();
        for (int i = 0; i < n -1; i++) {
            if (prices[i + 1] > prices[i]) {
                profit += prices[i + 1] - prices[i];
            }
        }
        return profit;
    }
};
