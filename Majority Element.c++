class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int l = nums.size();
        unordered_map<int, int> m;
        for(int i = 0; i < l; i++){
            m[nums[i]]++;
        }
        for(auto i : m){
            if(i.second > l/2){
                return i.first;
            }
        }
    }
};