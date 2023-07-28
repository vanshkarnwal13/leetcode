class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(n == 0)
            return -1;
        if(grid[0][0] == 1)
            return -1;
        if(n == 1)
            return 1;
        int i, j, k, l, m, x, y, z;
        int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
        int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
        queue<pair<int, int>> q;
        q.push({0, 0});
        grid[0][0] = 1;
        while(!q.empty()) {
            pair<int, int> p = q.front();
            q.pop();
            x = p.first;
            y = p.second;
            for(i = 0; i < 8; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx >= 0 && nx < n && ny >= 0 && ny < n && grid[nx][ny] == 0) {
                    q.push({nx, ny});
                    grid[nx][ny] = grid[x][y] + 1;
                    if(nx == n - 1 && ny == n - 1)
                        return grid[nx][ny];
                }
            }
        }
        return -1;
    }
};