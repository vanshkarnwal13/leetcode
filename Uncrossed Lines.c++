class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int l1 = nums1.size(), l2 = nums2.size();
        vector<int> dp(l2 + 1, 0);
        for (int i = 1; i <= l1; ++i) {
            int pre = 0;
            for (int j = 1; j <= l2; ++j) {
                int tmp = dp[j];
                if (nums1[i - 1] == nums2[j - 1]) {
                    dp[j] = pre + 1;
                } else {
                    dp[j] = max(dp[j], dp[j - 1]);
                }
                pre = tmp;
            }
        }
        return dp[l2];
    }
};