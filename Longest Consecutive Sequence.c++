class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int l = nums.size();
        int max = 0;
        unordered_map<int, int> m;
        for(int i = 0 ; i<l;i++){
            m[nums[i]]++;
        }
        vector<int> v;
        for(auto i : m){
            v.push_back(i.first);
        }
        int ll = v.size();
        sort(v.begin(), v.end());
        for(int i=0;i<ll;i++){
            int count = 1;
            while(i<ll-1 && v[i+1] == v[i]+1){
                count++;
                i++;
            }
            if(count>max){
                max = count;
            }
        }
        return max;
        
    }
};