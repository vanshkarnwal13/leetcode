class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int l = coins.size();
        if(l == 0)
            return 0;
        if(amount == 0)
            return 1;
         vector<vector<int>> dp(l,vector<int>(amount+1,0));
        for(int i = 0;i<l;i++)
            dp[i][0] = 1;
        for(int i = 0;i<l;i++)
        {
            for(int j = 1;j<=amount;j++)
            {
                if(i == 0)
                {
                    if(j%coins[i] == 0)
                        dp[i][j] = 1;
                    else
                        dp[i][j] = 0;
                }
                else
                {
                    if(j<coins[i])
                        dp[i][j] = dp[i-1][j];
                    else
                        dp[i][j] = dp[i-1][j] + dp[i][j-coins[i]];
                }
            }
        }
        return dp[l-1][amount];
    }
};