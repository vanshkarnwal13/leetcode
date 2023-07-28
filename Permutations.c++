class Solution {
public:
    void helper(vector<vector<int>>& result, vector<int>& temp, vector<int>& nums) {
        if(temp.size() == nums.size()) {
            result.push_back(temp);
            return;
        }
        for(int i= 0; i < nums.size(); i++) {
            if(find(temp.begin(), temp.end(), nums[i]) != temp.end()) {
                continue;
            }
            temp.push_back(nums[i]);
            helper(result, temp, nums);
            temp.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        helper(result, temp, nums);
    }
};