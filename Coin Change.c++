class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int l = coins.size();
        if(l == 0)
            return -1;
        if(amount == 0)
            return 0;
        vector<int> dp(amount+1,INT_MAX);
        dp[0] = 0;
        for(int i = 1;i<=amount;i++)
        {
            for(int j = 0;j<l;j++)
            {
                if(coins[j]<=i)
                {
                    if(dp[i-coins[j]]!=INT_MAX)
                        dp[i] = min(dp[i],dp[i-coins[j]]+1);
                }
            }
        }
        if(dp[amount] == INT_MAX)
            return -1;
        return dp[amount];
        
    }
};
coins = [1,2,5], amount = 11
dp = [0,INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX]
i = 1
j = 0
dp = [0,1, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX]
i = 2
j = 0
dp = [0,1,2, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX]
j = 1
dp = [0,1,1, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX]
i = 3
j = 0
dp = [0,1,1,2, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX]
j = 1
