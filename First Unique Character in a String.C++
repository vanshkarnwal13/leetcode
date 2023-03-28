class Solution {
public:
    int firstUniqChar(string s) {
        int l = s.length();
        int count = 0;
        int index = 0;
        for (int i = 0; i < l; i++) {
            count = 0;
            for (int j = 0; j < l; j++) {
                if (s[i] == s[j]) {
                    count++;
                }
            }
            if (count == 1) {
                index = i;
                break;
            }
        }
        if (count == 1) {
            return index;
        } else {
            return -1;
        }
    }
};