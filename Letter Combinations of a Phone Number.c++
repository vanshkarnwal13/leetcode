class Solution {
public:
    void helper(string digits, int index, string temp, vector<string>& result) {
        if (index == digits.size()) {
            result.push_back(temp);
            return;
        }
        string letters = "";
        switch (digits[index]) {
            case '2':
                letters = "abc";
                break;
            case '3':
                letters = "def";
                break;
            case '4':
                letters = "ghi";
                break;
            case '5':
                letters = "jkl";
                break;
            case '6':
                letters = "mno";
                break;
            case '7':
                letters = "pqrs";
                break;
            case '8':
                letters = "tuv";
                break;
            case '9':
                letters = "wxyz";
                break;
        }
        for (int i = 0; i < letters.size(); i++) {
            helper(digits, index + 1, temp + letters[i], result);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.size() == 0) {
            return result;
        }
        string temp = "";
        helper(digits, 0, temp, result);
        return result;
    }
};