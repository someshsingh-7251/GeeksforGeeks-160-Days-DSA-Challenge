class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;    
        if (n == 0) return ans;
        if (n == 1) return arr;
        int ele1 = 0, ele2 = 0, c1 = 0, c2 = 0;
        for (int num : arr) {
            if (num == ele1) {
                c1++;
            } else if (num == ele2) {
                c2++;
        } else if (c1 == 0) {
            ele1 = num;
            c1 = 1;
        } else if (c2 == 0) {
            ele2 = num;
            c2 = 1;
        } else {
            c1--;
            c2--;
        }
        }
        c1 = 0, c2 = 0;
        for (int num : arr) {
            if (num == ele1) c1++;
            else if (num == ele2) c2++;
        }
        if (c1 > n / 3) ans.push_back(ele1);
        if (c2 > n / 3 && ele2 != ele1) ans.push_back(ele2);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
