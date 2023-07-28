class Solution {
public:
    
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> v;
        for (int x = 0; x < position.size(); x++) {
            v.push_back(make_pair(position[x], speed[x]));
        }
        sort(v.begin(), v.end(), greater<pair<int, int>>());
        int res = 1;
        float time = (float)(target - v[0].first)/v[0].second;
        for (int x = 1; x < v.size(); x++) {
            float temp = (float)(target - v[x].first)/v[x].second;
            if (temp > time){
                res++;
                time = temp;
            }
        }
        return res;
    }
 };


