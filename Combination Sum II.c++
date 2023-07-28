class Solution {
public:
    void helper (vector<vector<int>>& result, vector<int>& temp, vector<int>& candidates, int target, int start, vector<bool>& used) {
        if (target == 0) {
            result.push_back(temp);
            return;
        }
        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > target) {
                break;
            }
            if (i > 0 && candidates[i] == candidates[i - 1] && used[i - 1]== false) {
                continue;
            }
            temp.push_back(candidates[i]);
            used[i] = true;
            helper(result, temp, candidates, target - candidates[i], i + 1, used);
            temp.pop_back();
            used[i] = false;
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        vector<bool> used(candidates.size(), false);
        helper(result, temp, candidates, target, 0, used);
    }
};