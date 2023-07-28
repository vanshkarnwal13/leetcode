class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        int n = nums1.size(), m = nums2.size();
        unordered_map<int, int> mp;
        unordered_map<int, int> mp2;
        for(int i = 0; i < n; i++) {
            mp[nums1[i]]++;
        }
        for(int i = 0; i < m; i++) {
            mp[nums2[i]]++;
        }
        for(int i = 0; i < m; i++) {
            mp[nums2[i]]--;
        }
        for(int i = 0; i < n; i++) {
            mp[nums1[i]]--;
        }
        for(auto it = mp.begin(); it != mp.end(); it++) {
            if(it->second != 0) {
                ans[0].push_back(it->first);
            }
        }
        for(auto it = mp2.begin(); it != mp2.end(); it++) {
            if(it->second != 0) {
                ans[1].push_back(it->first);
            }
        }
        
        return ans;
    }
};