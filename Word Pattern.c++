class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int l1 = pattern.length();
        int l2 = s.length();
        unordered_map<char, int> m;
        unordered_map<string, int> m2;
        int count = 0;
        for(int i = 0; i < l1; i++){
            if(m.find(pattern[i]) == m.end()){
                m[pattern[i]] = count;
                count++;
            }
        }
        count = 0;
        

    }
};