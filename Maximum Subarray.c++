class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max=nums[0];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            if(sum>max)
                max=sum;
            if(sum<0)
                sum=0;
        }
        return max;
    }
};
[-2,1,-3,4,-1,2,1,-5,4]
i=0
sum=0
sum=0+(-2)=(-2)
max=0
sum=0
i=1
sum=0
sum=0+1=1
max=1
sum=1
i=2
sum=1
sum=1+(-3)=(-2)
max=1
sum=0
i=3
sum=0
sum=0+4=4
max=4
sum=4
i=4
sum=4
sum=4+(-1)=3
max=4
sum=3
i=5
sum=3
sum=3+2=5
max=5
sum=5
i=6
sum=5
sum=5+1=6
max=6
sum=6
i=7
sum=6
sum=6+(-5)=1
max=6
sum=1
i=8
sum=1
sum=1+4=5
max=6
sum=5

