class Solution {
public:
    int numDecodings(string s) {
        int l = s.length();
        if(l == 0)
            return 0;   
        if(s[0] == '0')
            return 0;
        if(l == 1)
            return 1;  
        vector<int> dp(l, 0);
        for(int i = 0 ; i < l ; i++){
            if(i == 0){
                dp[i] = 1;
                continue;
            }
            if(s[i] == '0'){
                if(s[i-1] == '1' || s[i-1] == '2'){
                    if(i == 1)
                        dp[i] = 1;
                    else
                        dp[i] = dp[i-2];
                }
                else
                    return 0;
            }
            else{
                if(s[i-1] == '1' || (s[i-1] == '2' && s[i] <= '6')){
                    if(i == 1)
                        dp[i] = 2;
                    else
                        dp[i] = dp[i-1] + dp[i-2];
                }
                else
                    dp[i] = dp[i-1];
            }
        }
        return dp[l-1];
    }
};
