
class Solution {
public:
    int firstBadVersion(int n) {
        int i=n;
        while(i>0){
            if(isBadVersion(i))
            {
            i--;
            continue;
            }
            else
            return i+1;
        }
        return 1;
    }
};
    }
};