Input:
[1,4,1,3]
2
Output:
-1

class Solution {
public:
    long long makeSubKSumEqual(vector<int>& arr, int k) {     
        int n=arr.size();
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        if(sum%k!=0)
            return -1;
        long long target=sum/k;
        long long ans=0;
        unordered_map<long long,int> mp;
        mp[0]=1;
        long long curr=0;
        for(int i=0;i<n;i++)
        {
            curr+=arr[i];
            if(mp.find(curr-target)!=mp.end())
            {
                ans+=mp[curr-target];
            }
            mp[curr]++;
        }
        return ans;
    }
    }
};