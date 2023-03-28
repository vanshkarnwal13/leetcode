class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++)
        {
            ans.push_back(ans[i-1]+nums[i]);
        }
        return ans;
    }
};

[1,2,3,4]
i=1
ans[0]=1
ans[1]=ans[0]+nums[1]=1+2=3
ans[2]=ans[1]+nums[2]=3+3=6
ans[3]=ans[2]+nums[3]=6+4=10



