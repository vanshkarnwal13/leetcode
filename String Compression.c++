class Solution {
public:
    int compress(vector<char>& chars) {
        int l = chars.size();
        for(int i = 0;i<l;i++){
            int count = 1;
            while(i<l-1&&chars[i]==chars[i+1]){
                count++;
                chars.erase(chars.begin()+i+1);
                l--;
            }

            if(count>1){
                string s = to_string(count);
                for(int j = 0;j<s.size();j++){
                    chars.insert(chars.begin()+i+1,s[j]);
                    i++;
                }
            }

            
        return chars.size();
    }
};