
class Solution {
public:

    bool isSafe(int row, int col, vector<vector<char>>& board, int n) {

        // 1. Check left horizontal direction
        for(int i = 0; i < col; i++) {
            if(board[row][i] == 'Q') {
                return false;
            }
        }

        // 2. Check left upper diagonal
        int i = row - 1;
        int j = col - 1;

        while(i >= 0 && j >= 0) {
            if(board[i][j] == 'Q') {
                return false;
            }
            i--;
            j--;
        }

        // 3. Check left lower diagonal
        int x = row + 1;
        int y = col - 1;

        while(x < n && y >= 0) {
            if(board[x][y] == 'Q') {
                return false;
            }
            x++;
            y--;
        }

        return true;
    }

    void storeSolution(vector<vector<char>>& board,
                       vector<vector<string>>& ans, int n) {

        vector<string> temp;

        for(int i = 0; i < n; i++) {
            string row = "";

            for(int j = 0; j < n; j++) {
                row += board[i][j];
            }

            temp.push_back(row);
        }

        ans.push_back(temp);
    }

    void solve(vector<vector<char>>& board,
               vector<vector<string>>& ans, int n, int col) {

        // Base case
        if(col >= n) {
            storeSolution(board, ans, n);
            return;
        }

        // Try placing queen in every row of current column
        for(int row = 0; row < n; row++) {

            if(isSafe(row, col, board, n)) {

                // Place queen
                board[row][col] = 'Q';

                // Recursive call for next column
                solve(board, ans, n, col + 1);

                // Backtracking
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<vector<string>> ans;

        vector<vector<char>> board(n, vector<char>(n, '.'));

        solve(board, ans, n, 0);

        return ans;
    }
};
