class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int dp[m][n];
        dp[0][0] = grid[0][0];
        for (int i = 1; i < m; i++) {
            dp[i][0] = dp[i - 1][0] + grid[i][0];
        }
        for (int j = 1; j < n; j++) {
            dp[0][j] = dp[0][j - 1] + grid[0][j];
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
            }
        }
        return dp[m - 1][n - 1];
    }
};
1 3 1
1 5 1
4 2 1
grid = [[1,3,1],[1,5,1],[4,2,1]]
m=1
n=3
i=1
dp[1][0] = dp[0][0] + grid[1][0] = 1 + 1 = 2
dp[2][0] = dp[1][0] + grid[2][0] = 2 + 4 = 6
dp[0][1] = dp[0][0] + grid[0][1] = 1 + 3 = 4
dp[0][2] = dp[0][1] + grid[0][2] = 4 + 1 = 5
dp = [[1,4,5],[2,0,0],[6,0,0]]
1 4 5
2 7 6
6 8 7
i=1
j=1
dp[1][1] = min(dp[0][1], dp[1][0]) + grid[1][1] = min(4, 2) + 5 = 7
dp[1][2] = min(dp[0][2], dp[1][1]) + grid[1][2] = min(5, 7) + 1 = 6
dp[2][1] = min(dp[1][1], dp[2][0]) + grid[2][1] = min(7, 6) + 2 = 8
dp[2][2] = min(dp[1][2], dp[2][1]) + grid[2][2] = min(6, 8) + 1 = 7