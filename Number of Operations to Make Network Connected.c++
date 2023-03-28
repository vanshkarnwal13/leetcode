class Solution {
public:
    void dfs(vector<vector<int>>& graph, vector<bool>& visited, int i) {
        visited[i] = true;
        for (int j : graph[i]) {
            if (visited[j]) continue;
            dfs(graph, visited, j);
        }
    }

    int makeConnected(int n, vector<vector<int>>& connections) {
        if (connections.size() < n - 1) return -1;
        vector<vector<int>> graph(n);
        for (auto& c : connections) {
            graph[c[0]].push_back(c[1]);
            graph[c[1]].push_back(c[0]);
        }
        vector<bool> visited(n);
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (visited[i]) continue;
            ++ans;
            dfs(graph, visited, i);
        }
        return ans - 1;
    }
};