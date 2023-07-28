class Solution {
public:
    string simplifyPath(string path) {
        vector<string> v;
        string s;
        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '/') {
                if (s == "..") {
                    if (!v.empty()) v.pop_back();
                } else if (s != "." && s != "") {
                    v.push_back(s);
                }
                s = "";
            } else {
                s += path[i];
            }
        }
        if (s == "..") {
            if (!v.empty()) v.pop_back();
        } else if (s != "." && s != "") {
            v.push_back(s);
        }
        string ans;
        for (int i = 0; i < v.size(); i++) {
            ans += "/" + v[i];
        }
        if (ans == "") ans = "/";
        return ans;
        
    }
};