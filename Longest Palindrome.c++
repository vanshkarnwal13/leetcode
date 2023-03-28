class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int, int> m;
        for (char c : s) {
            m[c]++;
        }
        for(int i=0;i<m.size();i++)
        {
            cout<<m[i];
        }
        int res = 1;
        bool odd = false;
        for (int j=0;j<m.size();j++) {
            if (m[j] % 2 == 0) {
                res += m[j];
            } else {
                res += m[j] - 1;
                odd = true;
            }
        }
        if(odd)
        return res+1;
        else
        return res;
    }
};