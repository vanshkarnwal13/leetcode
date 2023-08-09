class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int l1 = ransomNote.length();
        int l2 = magazine.length();
        if(l1 > l2) 
            return false;
        unordered_map<char, int> m;
        for(int i = 0; i < l2; i++){
            if(m.find(magazine[i]) == m.end()){
                m[magazine[i]] = 1;
            }
            else{
                m[magazine[i]]++;
            }
        }
        for(int i = 0; i < l1; i++){
            if(m.find(ransomNote[i]) == m.end() || m[ransomNote[i]] == 0){
                return false;
            }
            else{
                m[ransomNote[i]]--;
            }
        }
        return true;
    }
};