class Solution {
public:
    bool isHappy(int n) {
        while(n != 1)
        {
            int sum = 0;
            while(n != 0)
            {
                sum += (n%10)*(n%10);
                n /= 10;
            }
            n = sum;
            if(n == 4)
                return false;
        }   
        return true;
    }
};