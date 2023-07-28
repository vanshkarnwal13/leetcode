class Solution {
public:
    string addBinary(string a, string b) {
        int l1 = a.length();
        int l2 = b.length();
        int l = max(l1,l2);
        string s = "";
        int carry = 0;
        for(int i = 0; i < l; i++)
        {
            int x = 0;
            int y = 0;
            if(i < l1)
                x = a[l1-i-1] - '0';
            if(i < l2)
                y = b[l2-i-1] - '0';
            int sum = x + y + carry;
            if(sum == 0)
            {
                s = "0" + s;
                carry = 0;
            }
            else if(sum == 1)
            {
                s = "1" + s;
                carry = 0;
            }
            else if(sum == 2)
            {
                s = "0" + s;
                carry = 1;
            }
            else if(sum == 3)
            {
                s = "1" + s;
                carry = 1;
            }
        }
        if(carry == 1)
            s = "1" + s;
        return s;
    }
};