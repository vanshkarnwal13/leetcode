class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if (m * n != r * c) return mat;
        vector<vector<int>> ans(r, vector<int>(c));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int k = i * n + j;
                ans[k / c][k % c] = mat[i][j];
            }
        }
        return ans;
    }
};

mat = [[1,2],[3,4]], r = 1, c = 4
n=2, m=2
k=0, i=0, j=0
ans[0][0] = mat[0][0] = 1
k=1, i=0, j=1
ans[0][1] = mat[0][1] = 2
k=2, i=1, j=0
ans[0][2] = mat[1][0] = 3
k=3, i=1, j=1
ans[0][3] = mat[1][1] = 4
