class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> m;
        for (int i = 0; i < nums1.size(); i++) {
            m[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (m[nums2[i]] > 0) {
                ans.push_back(nums2[i]);
                m[nums2[i]]--;
            }
        }
        return ans;
    }
};
nums1 = [1,2,2,1], nums2 = [2,2]
m[1] = 1
m[2] = 1
m[2] = 2
m[1] = 2
i=0
m[2] = 2
ans = [2]
i=1
m[2] = 1
ans = [2,2]
return ans

