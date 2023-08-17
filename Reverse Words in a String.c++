class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        int l = 0;
        int r = s.length() - 1;
        while(r>=0){
            if(s[r] == ' '){
                r--;
            }
            else{
                l = r;
                while(l>=0 && s[l] != ' '){
                    l--;
                }
                res += s.substr(l+1, r-l);
                res += " ";
                r = l;
            }
        }
        return res.substr(0, res.length()-1);
    }
};