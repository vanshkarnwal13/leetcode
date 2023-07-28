class Solution {
public:
    static bool cmp(pair<string, int> a, pair<string, int> b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        return a.second > b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> m;
        for (auto w : words) {
            m[w]++;
        }
        vector<pair<string, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), cmp);
        vector<string> r;
        for (int i = 0; i < k; i++) {
            r.push_back(v[i].first);
        }
    
        return r;
    }
};