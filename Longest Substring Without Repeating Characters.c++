class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        int max = 0;
        int start = 0;
        int end = 0;
        int hash[256] = {0};
        while (end < len) {
            if (hash[s[end]] == 0) {
                hash[s[end]] = 1;
                end++;
                if (end - start > max) {
                    max = end - start;
                }
            } else {
                hash[s[start]] = 0;
                start++;
            }
        }
        return max;
    }
};