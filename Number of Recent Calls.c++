class RecentCounter {
public:
    vector<int> nums;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= t - 3000 && nums[i] <= t) {
                count++;
            }
        }
        nums.push_back(t);
        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */