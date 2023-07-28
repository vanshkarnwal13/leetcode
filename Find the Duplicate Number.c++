class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l = nums.size();
        unordered_map<int, int> m;
        for (int i = 0; i < l; i++) {
            if (m.find(nums[i]) == m.end()) {
                m[nums[i]] = 1;
            } 
            else {
                return nums[i];
            }
        }
        return -1;
    }
};