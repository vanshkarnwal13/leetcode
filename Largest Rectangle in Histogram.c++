class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack <int> s;
        int n = heights.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                int h = heights[s.top()];
                s.pop();
                int l;
                if (s.empty()) {
                    l = 0;
                } else {
                    l = s.top() + 1;
                }
                int r = i - 1;
                ans = max(ans, h * (r - l + 1));
            }
            s.push(i);
        }
        while (!s.empty()) {
            int h = heights[s.top()];
            s.pop();
            int l;
            if (s.empty()) {
                l = 0;
            } else {
                l = s.top() + 1;
            }
            int r = n - 1;
            ans = max(ans, h * (r - l + 1));
        }
        return ans;
    }
};













