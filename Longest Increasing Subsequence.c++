class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int l = nums.size();
        if(l == 0)
            return 0;
        vector<int> dp(l,1);
        int max1 = 1;
        for(int i = 1; i < l; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(nums[i] > nums[j])
                    dp[i] = max(dp[i],dp[j]+1);
            }
            if(dp[i] > max1)
                max1 = dp[i];
        }
        return max1;
    }
};