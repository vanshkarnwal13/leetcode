class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> graph(n);
        for (auto& c : connections) {
            graph[c[0]].push_back(c[1]);
            graph[c[1]].push_back(-c[0]);
        }
        int ans = 0;
        vector<bool> visited(n);
        function<void(int)> dfs = [&](int u) {
            visited[u] = true;
            for (int v : graph[u]) {
                if (visited[abs(v)]) continue;
                if (v > 0) ++ans;
                dfs(abs(v));
            }
        };
        dfs(0);
        return ans;
    }
};