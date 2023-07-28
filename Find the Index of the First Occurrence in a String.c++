class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        if (m == 0) return 0;
        if (n == 0) return -1;
        for(int i = 0; i < n; i++) {
            if (haystack[i] == needle[0]) {
                int j = 0;
                while (j < m && i + j < n && haystack[i + j] == needle[j]) {
                    j++;
                }
                if (j == m) return i;
            }
        }
        return -1;
    }
};