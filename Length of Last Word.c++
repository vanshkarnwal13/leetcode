class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.length();
        if(l == 0)
            return 0;
        int i = l-1;
        while(i >= 0 && s[i] == ' ')
            i--;
        if(i < 0)
            return 0;
        int j = i;
        while(j >= 0 && s[j] != ' ')
            j--;
        return i-j;
    }
};