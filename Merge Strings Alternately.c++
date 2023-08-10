class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1 = word1.length();
        int l2 = word2.length();
        string res = "";
        int n=0;
        if(l1>l2)
            n=l2;
        else
            n=l1;
        for(int i = 0; i<n;i++){
            res = res + word1[i] + word2[i];
        }
        if(n<l1){
            for(int i = n;i<l1;i++)
                res = res + word1[i];
        }
        else{
            for(int i = n;i<l2;i++)
                res = res + word2[i];
        }
        return res;
    }
};