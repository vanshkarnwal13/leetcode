class Solution {
public:
    string intToRoman(int num) {
        string roman;
        int i = 0;
        while (num > 0) {
            int digit = num % 10;
            num /= 10;
            roman = digitToRoman(digit, i) + roman;
            i++;
        }
        return roman;
    }
};