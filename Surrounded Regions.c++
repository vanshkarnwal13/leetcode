class Solution {
public:
    void dfs(vector<vector<char>>& board, int i, int j) {
        if (i < 0 || i >= board.size()) {
            return;
        }
        if (j < 0 || j >= board[0].size()) {
            return;
        }
        if (board[i][j] == 'O') {
            board[i][j] = '#';
            dfs(board, i - 1, j);
            dfs(board, i + 1, j);
            dfs(board, i, j - 1);
            dfs(board, i, j + 1);
        }
    }
    void solve(vector<vector<char>>& board) {
        if (board.size() == 0) {
            return;
        }
        int m = board.size();
        int n = board[0].size();
        for(int i = 0; i < m; i++) { // left
            for(int j = 0; j < n; j++) {
                if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                    dfs(board, i, j);
                }
            }
        }
        //print(board);
        for (int i = 0; i < m; i++) { // top
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O') {
                    board[i][j] = 'X';
                } 
                else if (board[i][j] == '#') {
                    board[i][j] = 'O';
                }
            }
        }
        //print(board);
    }
};