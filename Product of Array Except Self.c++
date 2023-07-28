class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) { 
        int n = nums.size();
        vector<int> res(n,1);
        int left = 1;
        int right = 1;
        for(int i=0;i<n;i++)
        {
            res[i] = res[i]*left;
            left = left*nums[i];
            res[n-1-i] = res[n-1-i]*right;
            right = right*nums[n-1-i];
        }
        return res; 
    }
};

nums = [1,2,3,4]
res = [1,1,1,1]
left = 1 
right = 1
i = 0
res[0] = 1*1 = 1
left = 1*1 = 1
res[3] = 1*1 = 1
right = 1*4 = 4

i = 1
res[1] = 1*1 = 1
left = 1*2 = 2
res[2] = 1*4 = 4
right = 4*3 = 12

i = 2
res[2] = 4*2 = 8 
left = 2*3 = 6
res[1] = 1*12 = 12
right = 12*2 = 24

i = 3
res[3] = 1*6 = 6
left = 6*4 = 24
res[0] = 1*24 = 24
right = 24*1 = 24

res[0] = 24
res[1] = 12
res[2] = 8
res[3] = 6

res = [24,12,8,6]


