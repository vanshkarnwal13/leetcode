class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int l = arr.size();
        unordered_map<int,int>m;
        for(int i = 0;i<l;i++){
            m[arr[i]]++;
        }
        for(auto it = m.begin();it!=m.end();it++){
            for(auto it2 = m.begin();it2!=m.end();it2++){
                if(it!=it2){
                    if(it->second == it2->second){
                        return false;
                    }
                }
            }
        }
        return true;
        
    }
};