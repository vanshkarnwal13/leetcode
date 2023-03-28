class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                int l = mid, r = mid;
                while (l > 0 && nums[l - 1] == target) 
                l--;
                while (r < nums.size() - 1 && nums[r + 1] == target) 
                r++;
                return {l, r};
            }
            else if (nums[mid] < target) 
            left = mid + 1;
            else 
            right = mid - 1;
        }
        return {-1, -1};
    }
};

nums = [5,7,7,8,8,10], target = 8
left = 0 
right = 5
mid = 2
left = 3
right = 5
mid = 4
l= 4
r= 4
l= 3
r= 4
return {3,4}