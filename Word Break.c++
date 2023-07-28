class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int l = wordDict.size();
        if(l == 0)
            return false;
        int l2 = s.size();
        if(l2 == 0)
            return false;
        vector<bool> dp(l2+1,false);
        dp[0] = true;
        for(int i = 1; i <= l2; i++)
        {
            for(int j = 0; j < l; j++)
            {
                int l3 = wordDict[j].size();
                if(i >= l3)
                {
                    if(s.substr(i-l3,l3) == wordDict[j])
                    {
                        dp[i] = dp[i] || dp[i-l3];
                    }
                }
            }
        }
        return dp[l2];
    }
};