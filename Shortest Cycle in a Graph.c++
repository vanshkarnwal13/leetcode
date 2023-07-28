Input: n = 7, edges = [[0,1],[1,2],[2,0],[3,4],[4,5],[5,6],[6,3]]
Output: 3

class Solution {
public:
    int findShortestCycle(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n);
        for(auto edge:edges)
        {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        int min_cycle=INT_MAX;
        for(int i=0;i<n;i++)
        {
            vector<int> parent(n,-1);
            vector<int> level(n,0);
            queue<int> q;
            q.push(i);
            parent[i]=i;
            level[i]=0;
            while(!q.empty())
            {
                int node=q.front();
                q.pop();
                for(auto child:graph[node])
                {
                    if(parent[node]==child)
                        continue;
                    if(parent[child]==-1)
                    {
                        parent[child]=node;
                        level[child]=level[node]+1;
                        q.push(child);
                    }
                    else
                    {
                        min_cycle=min(min_cycle,level[node]+level[child]+1);
                    }
                }
            }
        }
        return min_cycle==INT_MAX?-1:min_cycle;
    }
};

