class Solution {
public:
    string decodeString(string s) {
        string result;
        stack<int> count;
        stack<string> str;
        int i = 0;
        while (i < s.size()) {
            if (isdigit(s[i])) {
                int start = i;
                while (isdigit(s[i])) {
                    i++;
                }
                count.push(stoi(s.substr(start, i - start)));
            } 
            else if (s[i] == '[') {
                str.push(result);
                result = "";
                i++;
            } 
            else if (s[i] == ']') {
                string temp = result;
                for (int j = 0; j < count.top() - 1; j++) {
                    result += temp;
                }
                result = str.top() + result;
                str.pop();
                count.pop();
                i++;
            } 
            else {
                result += s[i++];
            }
        }
        return result;
    }
};

s = "2[abc]3[cd]ef"
result = ""
count = []
str = []
i = 0
s[0]  = 2
start = 0
i = 1
count = [2]
i = 1
s[1] = [
str = [""]
result = ""
i = 2
s[2] = a
result = a
i = 3
s[3] = b
result = ab
i = 4
s[4] = c
result = abc
i = 5
s[5] = ]
temp = abc
j = 0
result = abc
j = 1
result = abcabc
result = abcabc
str = []
count = []
i = 6
s[6] = 3
start = 6
i = 7
count = [3]
i = 7
s[7] = [
str = ["abcabc"]
result = ""
i = 8
s[8] = c
result = c
i = 9
s[9] = d
result = cd
i = 10
s[10] = ]
temp = cd
j = 0
result = cd
j = 1
result = cdcd
j = 2
result = cdcdcd
result = abcabccdcdcd

