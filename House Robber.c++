class Solution {
public:
    int rob(vector<int>& nums) {
        int l = nums.size();
        if(l == 0)
            return 0;
        if(l == 1)
            return nums[0];
        if(l == 2)
            return max(nums[0], nums[1]);
        int dp[l];
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(int i=2; i<l; i++)
            dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
        return dp[l-1];
    }
};