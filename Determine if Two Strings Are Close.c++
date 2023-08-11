class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int l1 = word1.length();
        int l2 = word2.length();
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        for (int i = 0; i < l1; i++) {
            m1[word1[i]]++;
        }
        for (int i = 0; i < l2; i++) {
            m2[word2[i]]++;
        }
        if (m1.size() != m2.size()) {
            return false;
        }
        for (auto i : m1) {
            if (m2.find(i.first) == m2.end()) {
                return false;
            }
        }
        for (auto i : m2) {
            if (m1.find(i.first) == m1.end()) {
                return false;
            }
        }
        vector<int> v1;
        vector<int> v2;
        for (auto i : m1) {
            v1.push_back(i.second);
        }
        for (auto i : m2) {
            v2.push_back(i.second);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] != v2[i]) {
                return false;
            }
        }
        return true;

    }
};