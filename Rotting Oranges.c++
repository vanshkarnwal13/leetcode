class Solution {
public:
    int bfs (vector<vector<int>>& grid, int i, int j, int step) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size()) {
            return INT_MAX;
        }
        if (grid[i][j] == 0) {
            return step;
        }
        if (grid[i][j] <= step) {
            return INT_MAX;
        }
        grid[i][j] = step;
        int left = bfs(grid, i, j - 1, step + 1);
        int right = bfs(grid, i, j + 1, step + 1);
        int up = bfs(grid, i - 1, j, step + 1);
        int down = bfs(grid, i + 1, j, step + 1);
        return min(min(left, right), min(up, down));
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int res = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    res = max(res, bfs(grid, i, j, 1));
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    return -1;
                }
            }
        }
        return res - 1;

        
    }
};