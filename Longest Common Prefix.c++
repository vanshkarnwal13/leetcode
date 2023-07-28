class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        if(strs.size() == 0){
            return result;
        }
        int min = strs[0].size();
        for(int i = 0; i < strs.size(); i++){
            if(strs[i].size() < min){
                min = strs[i].size();
            }
        }
        for(int i = 0; i < min; i++){
            char c = strs[0][i];
            for(int j = 0; j < strs.size(); j++){
                if(strs[j][i] != c){
                    return result;
                }
            }
            result += c;
        }
        return result;
    }
};