class Solution {
public:
    void dfs(vector<string>& ans, string s, int left, int right) {
        if (left == 0 && right == 0) {
            ans.push_back(s);
            return;
        }
        if (left > 0) {
            dfs(ans, s + "(", left - 1, right);
        }
        if (right > 0 && right > left) {
            dfs(ans, s + ")", left, right - 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;
        dfs(ans, s, n, n);
        return ans;
    }
}; 

n=3
dfs(ans,s,3,3)
dfs(ans,s+"(",2,3)
dfs(ans,s+"((",1,3)
dfs(ans,s+"(((",0,3)
dfs(ans,s+"((()",0,2)
dfs(ans,s+"((())",0,1)
dfs(ans,s+"((()))",0,0)
ans.push_back(s+"((()))")   
dfs(ans,s+"(()",1,2)
dfs(ans,s+"(()(",0,2)
dfs(ans,s+"(()()",0,1)
dfs(ans,s+"(()())",0,0)

