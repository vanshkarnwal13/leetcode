class Solution {
public:
    int characterReplacement(string s, int k) {
        int count[26] = {0};
        int left = 0, right = 0, maxCount = 0, res = 0;
        while (right < s.size()) {
            maxCount = max(maxCount, ++count[s[right++] - 'A']);
            while (right - left - maxCount > k) {
                count[s[left++] - 'A']--;
            }
            res = max(res, right - left);
        }
        return res;
    }
};

s = "AABABBA", k = 1