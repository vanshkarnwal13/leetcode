#include <unordered_map>
#include <string>

class Solution {
public:
    int firstUniqChar(std::string s) {
        std::unordered_map<char, int> se;
        for (char c : s) {
            se[c]++;
        }
        for (char c : s) {
            if (se[c] == 1) {
                return s.find(c);
            }
        }
        return -1;
    }
};
