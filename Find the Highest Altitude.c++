class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int l = gain.size();
        int sum = 0;
        int max = 0;
        for(int i = 0 ; i<l;i++){
            sum = sum + gain[i];
            if(sum>max)
            max=sum;
        }
        return max;
    }
};