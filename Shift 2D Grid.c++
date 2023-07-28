class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        if(m == 0)
            return grid;
        int n = grid[0].size();
        if(n == 0)
            return grid;
        vector<vector<int>> res(m,vector<int>(n,0));
        while(k!=0)
        {
            for(int i = 0; i < m; i++)
            {
                for(int j = 0; j < n-1; j++)
                {
                    res[i][j+1] = grid[i][j];
                }
            }
            for(int i = 0; i < m-1; i++)
            {
                res[i+1][0] = grid[i][n-1];
            }
            res[0][0] = grid[m-1][n-1];
            grid = res;
            k--;
        }
        return res; 
    }
};