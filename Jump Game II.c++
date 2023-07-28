class Solution {
public:
    int jump(vector<int>& nums) {
       int l = nums.size();
        vector<int> dp(l, INT_MAX);
        dp[0] = 0;
        for(int i = 0; i < l; i++){
                for(int j = 1; j <= nums[i]; j++){
                    if(i + j < l) 
                        dp[i + j] = min(dp[i + j], dp[i] + 1);
                        
                }
            
        }
        return dp[l - 1] == INT_MAX ? 0 : dp[l - 1];
    }
};