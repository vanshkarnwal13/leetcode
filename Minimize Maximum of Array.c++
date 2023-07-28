class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) { // 1 <= nums.size() <= 10^5
        int ans = 0;
        int usedMask = 0;
        for (const int num : nums) {
            if (usedMask >> num & 1) {
                usedMask = 1 << num;
                ++ans;
            } else {
                usedMask |= 1 << num;
            }
        }
        return ans;
    }
};