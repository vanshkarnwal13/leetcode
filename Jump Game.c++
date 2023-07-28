class Solution {
public:
    bool canJump(vector<int>& nums) {
        int l = nums.size();
        vector<int> dp(l, 0);
        dp[0] = 1;
        for(int i = 0; i < l; i++){
            if(dp[i] == 1){
                for(int j = 1; j <= nums[i]; j++){
                    if(i + j < l) 
                        dp[i + j] = 1;
                }
            }
        }
        return dp[l - 1] == 1;

    }
};