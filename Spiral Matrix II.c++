class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int>(n));
        if(n==0)
            return v;
        int m=n;
        int i=0,j=0;
        int count=1;
        while(i<m && j<n){
            for(int p=j;p<n;p++){
                v[i][p]=count;
                count++;
            }
            i++;
            for(int p=i;p<m;p++){
                v[p][n-1]=count;
                count++;
            }
            n--;
            if(i<m){
                for(int p=n-1;p>=j;p--){
                    v[m-1][p]=count;
                    count++;
                }
                m--;
            }
            if(j<n){
                for(int p=m-1;p>=i;p--){
                    v[p][j]=count;
                    count++;
                }
                j++;
            }
        }
        return v;
    }
};