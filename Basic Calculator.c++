class Solution {
public:
    int calculate(string s) {
        int l = s.length();
        queue<char> q;
        queue<int> q2;
        for(int i = 0; i < l; i++){
            if(s[i] == ' ') 
                continue;
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                q.push(s[i]);
            }
            else if (s[i] == '('){
                int j = i + 1;
                int count = 1;
                while(count != 0){
                    if(s[j] == '(') 
                        count++;
                    else if(s[j] == ')') 
                        count--;
                    j++;
                }
                q2.push(calculate(s.substr(i + 1, j - i - 2)));
                i = j - 1;
            }
            else{
                q2.push(s[i] - '0');
            }
        }
        while(!q.empty()){
            char c = q.front();
            q.pop();
            int a = q2.front();
            q2.pop();
            int b = q2.front();
            q2.pop();
            if(c == '+'){
                q2.push(a + b);
            }
            else if(c == '-'){
                q2.push(a - b);
            }
            else if(c == '*'){
                q2.push(a * b);
            }
            else if(c == '/'){
                q2.push(a / b);
            }
        }
        return q2.front();

    }
};