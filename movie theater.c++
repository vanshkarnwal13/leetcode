#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

class SeatReservation{
    private:
    int rows;
    int seats_per_row;
    std::vector<std::vector<bool>> seats;
    std::vector<int> pointer;

public:
    SeatReservation(int rows, int seats_per_row) {
        this->rows = rows;
        this->seats_per_row = seats_per_row;
        this->seats = std::vector<std::vector<bool>>(rows, std::vector<bool>(seats_per_row, false));
        this->pointer = std::vector<int>(rows, 0);

    }

    string reserve(int row, int seat) {
        string s = "";
        if (row < 0 || row >= rows || seat < 0 || seat >= seats_per_row) {
            return "invalid seat";
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < seat; j++) {
                if (seats[i][j] == false) {
                    seats[i][j] = true;
                }
                else{
                    return "seat not available";
                }

            }
        return s;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    cin >> n >> m;
    int q;
    cin >> q;
    SeatReservation s(n, m);
    while(q--){
        int r, k;
        cin >> r >> k;
        string ans = s.reserve(r, k);
        cout<<ans<<endl;
    }
    return 0;
}