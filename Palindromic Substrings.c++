class Solution {
public:
    int countSubstrings(string s) {
        int l = s.length();
        if(l == 0)
            return 0;
        vector<vector<bool>> dp(l,vector<bool>(l,false)); 
        int count = 0;
        for(int i = 0; i < l; i++)
        {
            dp[i][i] = true;
            count++;
        }
        for(int i = 0; i < l-1; i++)
        {
            if(s[i] == s[i+1])
            {
                dp[i][i+1] = true;
                count++;
            }
        }
        for(int i = 2; i < l; i++)
        {
            for(int j = 0; j < l-i; j++)
            {
                if(s[j] == s[j+i] && dp[j+1][j+i-1])
                {
                    dp[j][j+i] = true;
                    count++;
                }
            }
        }
        return count;
        
    }
};