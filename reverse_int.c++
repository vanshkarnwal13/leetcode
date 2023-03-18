class Solution {
public:
    int reverse(int x) {
        int sign = 1;
        if (x < 0) {
            sign = -1;
            x = -x;
        }
        int result = 0;
        while (x > 0) {
            int digit = x % 10;
            x /= 10;
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
                return 0;
            }
            result = result * 10 + digit;
        }
        return sign * result;
    }
};