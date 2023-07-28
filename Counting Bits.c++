class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n+1,0);
        for(int i = 1; i <= n; i++)
        {
            int temp = i;
            while(temp)
            {
                if(temp & 1)
                    result[i]++;
                temp >>= 1;
            }

        }
        return result;
    }
};