class Solution {
public:
    string longestPalindrome(string s) {
        int l = s.length();
        if(l == 0)
            return "";
        vector<string> dp(l,"");
        dp[0] = s[0];
        int max1 = 1;
        for(int i = 1; i < l; i++)
        {
            int start = i-1;
            int end = i+1;
            int len = 1;
            while(start>=0 && s[i] == s[i-1])
            {
                len++;
                start--;
            }
            while(start >= 0 && end < l && s[start] == s[end])
            {
                len += 2;
                start--;
                end++;
            }
            if(len > max1)
            {
                max1 = len;
                dp[i] = s.substr(start+1,len);
            }
            else
                dp[i] = dp[i-1];
        }
        return dp[l-1];


    }
};