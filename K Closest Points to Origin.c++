class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, int>> pq;
        for(int i = 0;i<points.size();i++){
            int x = points[i][0];
            int y = points[i][1];
            int d = (x*x + y*y)^0.5;
            pq.push({d, i});
            if(pq.size()>k){
                pq.pop();
            }

        }
        vector<vector<int>> ans;
        while(!pq.empty()){
            int i = pq.top().second;
            pq.pop();
            ans.push_back(points[i]);
        }
        return ans;
    }
    
};