class Solution {
public:
vector<vector<int>> subsetsdup(vector<int>& nums) {
    vector<vector<int>> result;
        vector<int> temp;
        result.push_back(temp);
        sort(nums.begin(), nums.end()); 
        for (int i = 0; i < nums.size(); i++) {
            int size = result.size();
            for (int j = 0; j < size; j++) {
                temp = result[j];
                temp.push_back(nums[i]);
                if(find(result.begin(), result.end(), temp) == result.end())
                    result.push_back(temp);
            }
        }
        return result;
    }
};