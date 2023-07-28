class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        if(m == 0)
            return 0;
        vector<int> dp(m,0);
        dp[0] = triangle[0][0]; 
        for(int i = 1; i < m; i++)
        {
            for(int j = i; j >= 0; j--)
            {
                if(j == i)
                    dp[j] = dp[j-1] + triangle[i][j];
                else if(j == 0)
                    dp[j] = dp[j] + triangle[i][j];
                else
                    dp[j] = min(dp[j-1],dp[j]) + triangle[i][j];
            }
        }
        sort(dp.begin(),dp.end());
        return dp[0];
    }
};