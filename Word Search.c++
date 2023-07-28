class Solution {
public:
    bool helper(vector<vector<char>>& board, string word, int index, int i, int j, vector<vector<bool>>& visited){
        cout << i << " " << j << endl;
        cout << "visited" << endl;
        for (int i = 0; i < visited.size(); i++) {
            for (int j =0; j < visited[0].size(); j++) {
                cout << visited[i][j] << " ";
            }
            cout << endl;
        } 
        if(index+1 == word.size() && board[i][j] == word[index]){
            return true;
        }
        if(board[i][j] != word[index]){
            return false;
        }
        if(i > 0 && !visited[i - 1][j]){
            visited[i - 1][j] = true;
            if(helper(board, word, index + 1, i - 1, j, visited)){
                return true;
            }
            visited[i - 1][j] = false;
        }
        if(i < board.size() - 1 && !visited[i + 1][j]){
            visited[i + 1][j] = true;
            if(helper(board, word, index + 1, i + 1, j, visited)){
                return true;
            }
            visited[i + 1][j] = false;
        }
        if(j > 0 && !visited[i][j - 1]){
            visited[i][j - 1] = true;
            if(helper(board, word, index + 1, i, j - 1, visited)){
                return true;
            }
            visited[i][j - 1] = false;
        }
        if(j < board[0].size() - 1 && !visited[i][j + 1]){
            visited[i][j + 1] = true;
            if(helper(board, word, index + 1, i, j + 1, visited)){
                return true;
            }
            visited[i][j + 1] = false;
        }
        return false;
    


    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>> visited(board.size(),vector<bool>(board[0].size(), false));
        for (int i = 0; i < board.size(); i++) {
            for (int j =0; j < board[0].size(); j++) {
                if (board[i][j] == word[0]) {
                    visited[i][j] = true;
                    if (helper(board, word, 0, i, j, visited)) {
                        return true;
                    }
                    visited[i][j] = false;
                }
            }
        }
    }
};