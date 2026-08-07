class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) { //checks row
            unordered_set<char> s;
            for (int j = 0; j < board[i].size(); j++) {
                if (s.contains(board[i][j]))
                    return false;
                if (board[i][j] != '.')
                    s.insert(board[i][j]);
            }
        }

        for (int i = 0; i < board.size(); i++) { //checks col
            unordered_set<int> s;
            for (int j = 0; j < board[i].size(); j++) {
                if (s.contains(board[j][i]))
                    return false;
                if (board[j][i] != '.')
                    s.insert(board[j][i]);
            }
        }

        for (int i = 0; i < 9; i+=3) {
            for (int l = 0; l < 9; l += 3) {
                unordered_set<int> s;
                for (int j = 0; j < 3; j++) {
                    for (int k = 0; k < 3; k++) {
                        if (s.contains(board[i+j][l+k]))
                            return false;
                        if (board[i+j][l+k] != '.')
                            s.insert(board[i+j][l+k]);
                    }
                }
            }
        }
        return true;
    }
};
