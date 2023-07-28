class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> res(m, vector<int>(n, INT_MAX - 100000));
        queue<pair<int, int>> q;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) {
                    res[i][j] = 0;
                    q.push(make_pair(i, j));
                }
            }
        }
        while (!q.empty()) {
            pair<int, int> p = q.front();
            q.pop();
            int i = p.first;
            int j = p.second;
            if (i > 0 && res[i - 1][j] > res[i][j] + 1) {
                res[i - 1][j] = res[i][j] + 1;
                q.push(make_pair(i - 1, j));
            }
            if (i < m - 1 && res[i + 1][j] > res[i][j] + 1) {
                res[i + 1][j] = res[i][j] + 1;
                q.push(make_pair(i + 1, j));
            }
            if (j > 0 && res[i][j - 1] > res[i][j] + 1) {
                res[i][j - 1] = res[i][j] + 1;
                q.push(make_pair(i, j - 1));
            }
            if (j < n - 1 && res[i][j + 1] > res[i][j] + 1) {
                res[i][j + 1] = res[i][j] + 1;
                q.push(make_pair(i, j + 1));
            }
        }
        return res;           
    }
};