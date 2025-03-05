class Solution {
public:

    unordered_map<int, bool> rowCheck;
    unordered_map<int, bool> lowerDiagonalCheck;
    unordered_map<int, bool> upperDiagonalCheck;

    void storeSol(vector<vector<string>> &ans, vector<vector<char>> &board, int n){
        vector<string> tempAns;

        for (int i = 0; i < n; i++ ){

            string output = "";

            for (int j = 0; j < n; j++ ){
                output.push_back(board[i][j]);
            }

            tempAns.push_back(output);
        }

        ans.push_back(tempAns);
    }

    bool isSafe(int row, int col, vector<vector<char>> &board) {
        // check for row, col, and diagonals
        if ( rowCheck[row] == true || lowerDiagonalCheck[row+col] == true || upperDiagonalCheck[row-col] == true ){
            return false;
        }

        return true;
    }

    void solve(int n, vector<vector<char>> &board, vector<vector<string>> &ans, int col){

        // BASE CASE 
        if ( col >= n ){
            // all queens are placed 
            // store and return 
            storeSol(ans, board, n);
            return;
        }

        // 1 case mera bakki ka recursion 
        for( int row = 0; row <= n-1; row++){

            if(isSafe(row, col, board)){
                
                board[row][col] = 'Q';
                
                rowCheck[row] = true;
                lowerDiagonalCheck[row+col] = true;
                upperDiagonalCheck[row-col] = true;

                solve(n, board, ans, col+1);

                // backtrack
                board[row][col] = '.';
                rowCheck[row] = false;
                lowerDiagonalCheck[row+col] = false;
                upperDiagonalCheck[row-col] = false;

            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> ans;
        vector<vector<char>> board(n, vector<char>(n, '.'));
        int col = 0;
        solve(n, board, ans, col);
        return ans;

    }
};