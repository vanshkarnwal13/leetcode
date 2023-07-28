class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        if(m == 0)
            return;
        int n = matrix[0].size();
        if(n == 0)
            return;
        unordered_set<int> row;
        unordered_set<int> col;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++) 
            {
                if(matrix[i][j] == 0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(auto it = row.begin(); it != row.end(); it++)
        {
            for(int j = 0; j < n; j++)
                matrix[*it][j] = 0;
        }
        for(auto it = col.begin(); it != col.end(); it++)
        {
            for(int i = 0; i < m; i++)
                matrix[i][*it] = 0;
        }
        
            
    }
};