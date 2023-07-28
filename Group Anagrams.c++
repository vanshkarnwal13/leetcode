class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, int> m;
        for (string s : strs) {
            string t = s;
            sort(t.begin(), t.end());
            if (m.find(t) == m.end()) {
                m[t] = ans.size();
                ans.push_back(vector<string>());
            }
            ans[m[t]].push_back(s);
        }
        return ans;
    }
};

strs = ["eat","tea","tan","ate","nat","bat"]
ans = []
m = {}
s = "eat"
t = "aet"
m = {"aet": 0}
ans = [["eat"]]
s = "tea"
t = "aet"
m = {"aet": 0}
ans = [["eat", "tea"]]
s = "tan"
t = "ant"

