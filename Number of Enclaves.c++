class Solution {
public:
    void dfs(vector<vector<int>>& A, int i, int j) {
    if (i < 0 || i == A.size() || j < 0 || j == A[0].size())
      return;
    if (A[i][j] == 0)
      return;

    A[i][j] = 0;
    dfs(A, i + 1, j);
    dfs(A, i - 1, j);
    dfs(A, i, j + 1);
    dfs(A, i, j - 1);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
                        dfs(grid, i, j);
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    ans++;
                }
            }
        }
        return ans;
    }
};