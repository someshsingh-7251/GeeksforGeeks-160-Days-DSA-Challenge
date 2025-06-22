class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int sum = 0;
        int ans = INT_MIN;
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            ans = max(ans, sum);
            if (sum < 0) sum = 0;
        }
        return ans;
    }
};
