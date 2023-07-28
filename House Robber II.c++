class Solution {
public:
    int rob(vector<int>& nums) {
        int l = nums.size();
        if(l == 0)
            return 0;
        if(l == 1)
            return nums[0];
        if(l == 2)
            return max(nums[0], nums[1]);
        if(l == 3)
            return max(nums[1], max(nums[0], nums[2]));
        vector<int> dp1(l-1, 0);
        vector<int> dp2(l-1, 0);
        dp1[0] = nums[0];
        dp1[1] = max(nums[0], nums[1]);
        dp2[0] = nums[1];
        dp2[1] = max(nums[1], nums[2]);
        for(int i=2; i<l-1; i++)
            dp1[i] = max(dp1[i-1], dp1[i-2] + nums[i]);
        for(int i=3; i<l-1; i++)i
            dp2[i-1] = max(dp2[i-1], dp2[i-2] + nums[i+1]);
        return max(dp1[l-2], dp2[l-2])
    }
};