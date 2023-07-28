class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int l = 0;
        int r = n - 1;
        while (l < r) {
            ans = max(ans, min(height[l], height[r]) * (r - l));
            if (height[l] < height[r]) {
                ++l;
            } else {
                --r;
            }
        }
        return ans;
    }
};
height = [1,8,6,2,5,4,8,3,7]
n = 9
ans = 0
i = 0,
j = 1