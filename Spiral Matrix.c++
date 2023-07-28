class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int m=matrix.size();
        if(m==0)
            return v;
        int n=matrix[0].size();
        int i=0,j=0;
        while(i<m && j<n){
            for(int p=j;p<n;p++)
                v.push_back(matrix[i][p]);
            i++;
            for(int p=i;p<m;p++)
                v.push_back(matrix[p][n-1]);
            n--;
            if(i<m){
                for(int p=n-1;p>=j;p--)
                    v.push_back(matrix[m-1][p]);
                m--;
            }
            if(j<n){
                for(int p=m-1;p>=i;p--)
                    v.push_back(matrix[p][j]);
                j++;
            }
        }
        return v;
    }
};