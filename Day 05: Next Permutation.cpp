class Solution {
  public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(); 
        int rm_peak = -1;
        for (int i = 1; i < n; ++i) {
            if (nums[i] > nums[i - 1])
            rm_peak = i;
        }
        if (rm_peak == -1) {
            std::reverse(nums.begin(), nums.end());
            return;
        }
        int index = rm_peak;
        for (int i = rm_peak; i <n; ++i) {
            if (nums[i] > nums[rm_peak - 1] && nums[i] < nums[rm_peak]) {
                index = i;
            }
        }
        swap(nums[index], nums[rm_peak - 1]);
        sort(nums.begin() + rm_peak, nums.end());
    }
};
