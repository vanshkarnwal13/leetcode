class Solution {
public:
    void helper(vector<vector<int>>& result, vector<int>& temp, vector<int>& candidates, int target, int start) {
        if (target == 0) {
            result.push_back(temp);

            return;
        }
        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > target) {
                break;
            }
            temp.push_back(candidates[i]);
            helper(result, temp, candidates, target - candidates[i], i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        helper(result, temp, candidates, target, 0);
        return result;
    }
};
