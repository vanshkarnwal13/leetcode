class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=1;
                else
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};

m = 3, n = 7
dp = [[0,0,0,0,0,0,0],
    [0,0,0,0,0,0,0],
    [0,0,0,0,0,0,0]]
i=0,j=0
dp[0][0]=1
i=0,j=1
dp[0][1]=1
i=0,j=2
dp[0][2]=1
i=0,j=3
dp[0][3]=1
i=0,j=4
dp[0][4]=1
i=0,j=5
dp[0][5]=1
i=0,j=6
dp[0][6]=1
i=1,j=0
dp = [[1,1,1,1,1,1,1],
    [1,0,0,0,0,0,0],
    [0,0,0,0,0,0,0]]
dp[1][0]=1
i=1,j=1
dp[1][1]=dp[0][1]+dp[1][0]=1+1=2
i=1,j=2
dp[1][2]=dp[0][2]+dp[1][1]=1+2=3
i=1,j=3
dp[1][3]=dp[0][3]+dp[1][2]=1+3=4
i=1,j=4
dp[1][4]=dp[0][4]+dp[1][3]=1+4=5
i=1,j=5
dp[1][5]=dp[0][5]+dp[1][4]=1+5=6
i=1,j=6
dp[1][6]=dp[0][6]+dp[1][5]=1+6=7
dp = [[1,1,1,1,1,1,1],
    [1,2,3,4,5,6,7],
    [0,0,0,0,0,0,0]]
i=2,j=0
dp[2][0]=1
i=2,j=1
dp[2][1]=dp[1][1]+dp[2][0]=2+1=3
i=2,j=2
dp[2][2]=dp[1][2]+dp[2][1]=3+3=6
i=2,j=3
dp[2][3]=dp[1][3]+dp[2][2]=4+6=10
i=2,j=4
dp[2][4]=dp[1][4]+dp[2][3]=5+10=15
i=2,j=5
dp[2][5]=dp[1][5]+dp[2][4]=6+15=21
i=2,j=6
dp[2][6]=dp[1][6]+dp[2][5]=7+21=28
dp = [[1,1,1,1,1,1,1],
    [1,2,3,4,5,6,7],
    [1,3,6,10,15,21,28]]