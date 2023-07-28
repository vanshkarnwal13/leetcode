class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if (s.size() < p.size()) {
            return res;
        }
        int count[26] = {0};
        for (int i = 0; i < p.size(); i++) {
            count[p[i] - 'a']++;
        }
        int left = 0, right = 0, diff = p.size();
        while (right < s.size()) {
            if (count[s[right++] - 'a']-- >= 1) {
                diff--;
            }
            if (diff == 0) {
                res.push_back(left);
            }
            if (right - left == p.size() && count[s[left++] - 'a']++ >= 0) {
                diff++;
            }
        }
        return res;
    }
};

s = "cbaebabacd", p = "abc"
int count[26] = {0};
count = {1, 1,  1,}
left = 0, right = 0, diff = 3
right = 1 
count = {1,1, 0}
diff = 2
right = 2
count = {1, 0, 0}
diff = 1
right = 3
count = {0, 0, 0}
diff = 0
res = {0}
left = 1
diff = 1
