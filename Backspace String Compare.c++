class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size();
        int m=t.size();
        int i=n-1,j=m-1;
        int count1=0,count2=0;
        while(i>=0 || j>=0)
        {
            while(i>=0)
            {
                if(s[i]=='#')
                {
                    count1++;
                    i--;
                }
                else if(count1>0)
                {
                    count1--;
                    i--;
                }
                else
                {
                    break;
                }
            }
            while(j>=0)
            {
                if(t[j]=='#')
                {
                    count2++;
                    j--;
                }
                else if(count2>0)
                {
                    count2--;
                    j--;
                }
                else
                {
                    break;
                }
            }
            if(i>=0 && j>=0 && s[i]!=t[j])
                return false;
            if((i>=0)!=(j>=0))
                return false;
            i--;
            j--;
        }
        return true;
    }
};
s = "ab#c", t = "ad#c"
n= 4, m=4
i=3,j=3
count1=0,count2=0
i=2,j=2
count1=1
i=1,j=1
count1=0
i=0
count2=0
j=0
