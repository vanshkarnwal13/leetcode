class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int l = nums.size();
        if (l == 0) return 0;
        unordered_map<int, int> m;
        for (int i = 0; i < l; ++i) {
            m[nums[i]] = m[nums[i]] + 1;
        }
        vector<int> v;
        for (auto it = m.begin(); it != m.end(); ++it) {
            v.push_back(it->first);
        }
        sort(v.begin(), v.end());
        int l2 = v.size();
        vector<int> dp(l2, 0);
        dp[0] = v[0] * m[v[0]];

        for (int i = 1; i < l2; ++i) {
            if (v[i] == v[i - 1] + 1) {
                if (i == 1) {
                    dp[i] = max(dp[i - 1], v[i] * m[v[i]]);
                } else {
                    dp[i] = max(dp[i - 1], dp[i - 2] + v[i] * m[v[i]]);
                }
            } else {
                dp[i] = dp[i - 1] + v[i] * m[v[i]];
            }
        }
        return dp[l2 - 1];
    }
};