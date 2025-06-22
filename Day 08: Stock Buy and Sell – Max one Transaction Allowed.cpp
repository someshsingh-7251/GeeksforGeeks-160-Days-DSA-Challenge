class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int maxProfit = 0;
        int minPrice = prices[0];
        int days = prices.size();
        for (int day = 1; day < days; day++) {
            maxProfit = max(maxProfit, prices[day] - minPrice);
            minPrice = min(minPrice, prices[day]);
        }
        return maxProfit;
    }
};
