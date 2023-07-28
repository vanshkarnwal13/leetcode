class Solution {
public:
    string getHint(string secret, string guess) {
        int bull = 0, cow = 0;
        int count[10] = {0};
        for (int i = 0; i < secret.size(); i++) {
            if (secret[i] == guess[i]) {
                bull++;
            } 
            else {
                if (count[secret[i] - '0']++ < 0) {
                    cow++;
                }
                if (count[guess[i] - '0']-- > 0) {
                    cow++;
            }
            }
        }
        return to_string(bull) + "A" + to_string(cow) + "B";


    }
};

secret = "1807", guess = "7810"
bull = 0  cow = 0
count[10] = {0}
i = 0
count[1] = 1
count[7] = -1
i = 1
secret[1] == guess[1] = 8
bull = 1
i = 2
count[0] = 1
count[1] = 0
cow = 1
i = 3
count[7] = 0
cow = 2
count[0] = 0
cow = 3
