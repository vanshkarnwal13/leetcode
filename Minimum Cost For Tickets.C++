class Solution {
public:
int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size(),lastDay = days.back();
        vector<int> dp(lastDay+1),isTravelDays(lastDay+1);
        for(auto& day:days){
            isTravelDays[day] = true;
        }
        for(int i=1;i<=lastDay;i++){
            if(!isTravelDays[i]){
                dp[i] = dp[i-1];
                continue;
            }
            dp[i] = dp[i-1] + costs[0];
            dp[i] = min(dp[i],dp[max(i-7,0)]+costs[1]);
            dp[i] = min(dp[i],dp[max(i-30,0)]+costs[2]);
        }
        return dp.back();
  }
};
days =
[1,2,3,4,6,8,9,10,13,14,16,17,19,21,24,26,27,28,29]
costs =
[3,14,50]

