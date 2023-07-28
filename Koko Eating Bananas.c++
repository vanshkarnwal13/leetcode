class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        sort(piles.begin(),piles.end());
        if(n==h)
            return piles[n-1];
        else if(n==1)
            return ceil((double)piles[0]/h);
        else{
            int l = 1;
            int r = piles[n-1];
            int ans = 0;
            while(l<=r){
                int mid = l + (r-l)/2;
                int count = 0;
                for(int i=0;i<n;i++){
                    count += ceil((double)piles[i]/mid);
                }
                if(count<=h){
                    ans = mid;
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            return ans;
        }
    }
};