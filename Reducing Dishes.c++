class Solution {
public:
 
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int sum = 0;
        int ans = 0;
        for (int i = satisfaction.size() - 1; i >= 0; i--) {
            sum += satisfaction[i];
            if (sum > 0) {
                ans += sum;
            } else {
                break;
            }
        }
        return ans;
    }
};

satisfaction = [-1,-8,0,5,-9]
sort()
satisfaction = [-9,-8,-1,0,5]
sum = 0
ans = 0
i = 4
sum = 5
ans = 5
i = 3
sum = sum + satisfaction[i] = 5 + 0 = 5
ans = ans + sum = 5 + 5 = 10
i = 2
sum = sum + satisfaction[i] = 5 + (-1) = 4
ans = ans + sum = 10 + 4 = 14
i = 1
sum = sum + satisfaction[i] = 4 + (-8) = -4
break;
return ans = 14