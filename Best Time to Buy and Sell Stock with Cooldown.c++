class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = prices.size();
        if(l == 0)
            return 0;
        vector<vector<int>> dp(l,vector<int>(2,0));
        dp[0][0] = 0;
        dp[0][1] = -prices[0];
        int max1 = dp[0][0];
        for(int i = 1;i<l;i++)
        {
            dp[i][0] = max(dp[i-1][0],dp[i-1][1]+prices[i]);
            if(dp[i][0] > max1)
                max1 = dp[i][0];
            if(i == 1)
                dp[i][1] = max(dp[i-1][1],dp[i-1][0]-prices[i]);
            else
                dp[i][1] = max(dp[i-1][1],dp[i-2][0]-prices[i]);
        }
        return max1;
    }
};

prices = [1,2,3,0,2]
l = 5