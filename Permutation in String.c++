class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();
        if (n1 > n2) return false;
        vector<int> cnt1(26, 0), cnt2(26, 0);
        for (int i = 0; i < n1; ++i) {
            ++cnt1[s1[i] - 'a'];
            ++cnt2[s2[i] - 'a'];
        }
        if (cnt1 == cnt2) return true;
        for (int i = n1; i < n2; ++i) {
            ++cnt2[s2[i] - 'a'];
            --cnt2[s2[i - n1] - 'a'];
            if (cnt1 == cnt2) return true;
        }
        return false;
    }
};
s1 = "ab", s2 = "eidbaooo"
n1= 2, n2 = 8
cnt1{26} = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, ...}
cnt2{26} = {0, 0, 0, 0, 1, 0, 0, 0, 1, 0, ...} 
i = 2
cnt2{26} = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, ...}
cnt2{26} = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, ...}