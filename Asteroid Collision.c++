class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int l = asteroids.size();
        stack<int> res;
        for (int i = 0; i < l; i++) {
            if (asteroids[i] > 0) {
                res.push(asteroids[i]);
            } else {
                while (!res.empty() && res.top() > 0 && res.top() < -asteroids[i]) {
                    res.pop();
                }
                if (res.empty() || res.top() < 0) {
                    res.push(asteroids[i]);
                } else if (res.top() == -asteroids[i]) {
                    res.pop();
                }
            }
        }
        vector<int> ans(res.size());
        for (int i = res.size() - 1; i >= 0; i--) {
            ans[i] = res.top();
            res.pop();
        }
        return ans;
        return res;
    }
};