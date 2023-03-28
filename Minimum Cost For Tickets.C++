class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        int dp[n+1];
        dp[0] = 0;
        int j = 0;
        for(int i = 1; i <= n; i++){
            while(days[i-1] > days[j] + 6) j++;
            dp[i] = min(dp[i-1] + costs[0], min(dp[j] + costs[1], dp[max(0, j-1)] + costs[2]));
        }
        return dp[n];
    }
};

days = [1,4,6,7,8,20], costs = [2,7,15]
n= 6
dp[0] = 0
j = 0
i = 1
days[i-1] = 1
days[j] + 6 = 7
dp[1] = min(dp[0] + costs[0], min(dp[j] + costs[1], dp[max(0, j-1)] + costs[2]))
dp[1] = min(0 + 2, min(dp[0] + 7, dp[max(0, 0-1)] + 15))
dp[1] = min(2, min(0 + 7, dp[0] + 15))
dp[1] = min(2, min(7, 0 + 15))
dp[1] = min(2, min(7, 15))
dp[1] = min(2, 7)
dp[1] = 2
j = 0
i = 2
days[i-1] = 4   
days[j] + 6 = 7
dp[2] = min(dp[1] + costs[0], min(dp[j] + costs[1], dp[max(0, j-1)] + costs[2]))
dp[2] = min(2 + 2, min(dp[0] + 7, dp[max(0, 0-1)] + 15))
dp[2] = min(4, min(0 + 7, dp[0] + 15))
dp[2] = min(4, min(7, 0 + 15))
dp[2] = min(4, min(7, 15))
dp[2] = min(4, 7)
dp[2] = 4
j = 0
i = 3
days[i-1] = 6
days[j] + 6 = 7
dp[3] = min(dp[2] + costs[0], min(dp[j] + costs[1], dp[max(0, j-1)] + costs[2]))
dp[3] = min(4 + 2, min(dp[0] + 7, dp[max(0, 0-1)] + 15))
dp[3] = min(6, min(0 + 7, dp[0] + 15))
dp[3] = min(6, min(7, 0 + 15))
dp[3] = min(6, min(7, 15))
dp[3] = min(6, 7)
dp[3] = 6
j = 0
i = 4
days[i-1] = 7
days[j] + 6 = 7
dp[4] = min(dp[3] + costs[0], min(dp[j] + costs[1], dp[max(0, j-1)] + costs[2]))
dp[4] = min(6 + 2, min(dp[0] + 7, dp[max(0, 0-1)] + 15))
dp[4] = min(8, min(0 + 7, dp[0] + 15))
dp[4] = min(8, min(7, 0 + 15))
dp[4] = min(8, min(7, 15))
dp[4] = min(8, 7)
dp[4] = 7
j = 1
i = 5
days[i-1] = 8
days[j] + 6 = 10
dp[5] = min(dp[4] + costs[0], min(dp[j] + costs[1], dp[max(0, j-1)] + costs[2]))
dp[5] = min(7 + 2, min(dp[1] + 7, dp[max(0, 1-1)] + 15))
dp[5] = min(9, min(7, dp[0] + 15))
dp[5] = min(9, min(7, 15))
dp[5] = min(9, 7)
dp[5] = 7
j = 1
i = 6
days[i-1] = 20
days[j] + 6 = 10
dp[6] = min(dp[5] + costs[0], min(dp[j] + costs[1], dp[max(0, j-1)] + costs[2]))
dp[6] = min(7 + 2, min(dp[1] + 7, dp[max(0, 1-1)] + 15))
dp[6] = min(9, min(7, dp[0] + 15))
dp[6] = min(9, min(7, 15))
dp[6] = min(9, 7)
dp[6] = 7
return dp[6] = 7
