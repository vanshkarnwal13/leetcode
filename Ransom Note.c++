class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int l1 = ransomNote.length();
        int l2 = magazine.length();
        int count = 0;
        for (int i = 0; i < l1; i++) {
            for (int j = 0; j < l2; j++) {
                if (ransomNote[i] == magazine[j]) {
                    magazine[j] = ' ';
                    count++;
                    break;
                }
            }
        }
        if (count == l1) {
            return true;
        } else {
            return false;
        }
    }
};