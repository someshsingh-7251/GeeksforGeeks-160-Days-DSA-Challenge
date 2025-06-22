class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int  n = arr.size();
        if (n == 1)
        return 0;  
        sort(arr.begin(), arr.end());
        int ans = arr[n - 1] - arr[0];
        for (int i = 0; i < n - 1; i++) {
            int max1 = max(arr[n - 1] - k, arr[i] + k);
            int minm = min(arr[0] + k, arr[i + 1] - k);
            if (minm < 0)
            continue;
            ans = min(ans, max1 - minm);
        }
        return ans;
    }
};
