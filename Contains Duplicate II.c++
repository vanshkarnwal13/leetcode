class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l = nums.size();
        unordered_map<int, int> m;
        for(int i = 0; i < l; i++){
            if(m.find(nums[i]) != m.end()){
                if(i - m[nums[i]] <= k){
                    return true;
                }
            }
            m[nums[i]] = i;
        }
        return false;
    }
};