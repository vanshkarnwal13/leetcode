class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int l = matrix.size();
        if(l == 0)
            return;
        for(int i = 0; i < l/2; i++)
        {
            for(int j = i; j < l-i-1; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[l-j-1][i];
                matrix[l-j-1][i] = matrix[l-i-1][l-j-1];
                matrix[l-i-1][l-j-1] = matrix[j][l-i-1];
                matrix[j][l-i-1] = temp;
            }
        }
        
    }
};