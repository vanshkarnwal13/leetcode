class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        int l = nums.size();
        vector<double> dp(target+1, 0);
        dp[0] = 1;
        for (int i = 1; i <= target; i++)
            for (int j = 0; j < l; j++)
                if (i >= nums[j])
                    dp[i] = dp[i] + dp[i-nums[j]];
        return dp[target];
    }
};