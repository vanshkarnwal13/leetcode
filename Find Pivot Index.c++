class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return -1;
        if(n==1)
            return 0;
        vector<int> left(n,0);
        vector<int> right(n,0);
        left[0]=nums[0];
        right[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            left[i]=left[i-1]+nums[i];
        }
        for(int i=n-2;i>=0;i--)
        {
            right[i]=right[i+1]+nums[i];
        }
        for(int i=0;i<n;i++)
        {
            if(left[i]==right[i])
                return i;
        }
        return -1;
    }
};

[1,7,3,6,5,6]
left[0]=1
left[1]=left[0]+nums[1]=1+7=8
left[2]=left[1]+nums[2]=8+3=11
left[3]=left[2]+nums[3]=11+6=17
left[4]=left[3]+nums[4]=17+5=22
left[5]=left[4]+nums[5]=22+6=28

right[5]=6
right[4]=right[5]+nums[4]=6+5=11
right[3]=right[4]+nums[3]=11+6=17
right[2]=right[3]+nums[2]=17+3=20
right[1]=right[2]+nums[1]=20+7=27
right[0]=right[1]+nums[0]=27+1=28
 