class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int l = nums.size();
        if(l == 0)
            return 0;
        vector<int> dp(l,0);
        vector<int> dp2(l,0);
        dp[0] = nums[0];
        int max1 = dp[0];
        dp2[l-1] = nums[l-1];
        int max2 = dp2[l-1];
        for(int i = 1; i < l; i++)
        {
            dp[i] = nums[i];
            if(dp[i] > max1)
                max1 = dp[i];
            if(dp[i-1] != 0)
                dp[i] *= dp[i-1];
            if(dp[i] > max1)
                max1 = dp[i];
        }
        for(int i = l-2; i >= 0; i--)
        {
            dp2[i] = nums[i];
            if(dp2[i] > max2)
                max2 = dp2[i];
            if(dp2[i+1] != 0)
                dp2[i] *= dp2[i+1];
            if(dp2[i] > max2)
                max2 = dp2[i];
        }
        return max(max1,max2);
        
    }
};