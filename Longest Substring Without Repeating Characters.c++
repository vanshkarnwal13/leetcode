class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int n = s.size();
        vector<int> last(128, -1);
        int i = 0;
        for (int j = 0; j < n; ++j) {
            i = max(i, last[s[j]] + 1);
            ans = max(ans, j - i + 1);
            last[s[j]] = j;
        }
        return ans;
    }
};