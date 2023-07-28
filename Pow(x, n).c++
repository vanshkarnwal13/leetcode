class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0)
            return 1;
        if(n < 0)
        {
            int m = -n;
            if(m % 2 == 0)
                return 1/myPow(x*x,m/2);
            else
                return 1/(x*myPow(x*x,m/2));
        }
        if(n % 2 == 0)
            return myPow(x*x,n/2);
        else
            return x*myPow(x*x,n/2);    
    }
};