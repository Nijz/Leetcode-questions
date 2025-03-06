class Solution {
public:

    bool isSafe(char digit, int row, int col, vector<vector<char>>& board){
        
        int n = board.size();

        // row check
        for (int k = 0; k < n; k++ ){
            if(board[row][k] == digit){
                return false;
            }
        }

        // column check
        for (int k = 0; k < n; k++ ){
            if( board[k][col] == digit){
                return false;
            }
        }

        // 3*3 matrix check
        for( int k = 0; k < n; k++ ){
            if (board[3*(row/3)+(k/3)][3*(col/3)+k%3] == digit){
                return false;
            }
        }

        return true;
    }

    bool solve(vector<vector<char>>& board){
        // BASE CASE -> ?
        // 1 Case by myself after wards recursion
        // to insert digit find empty space
        for ( int i = 0; i < board.size(); i++){
            for(int j = 0; j <board[0].size(); j++){

                if( board[i][j] == '.' ){
                    // empty space found now put digit from 1-9 which ever it's valid
                    for( char digit = '1'; digit <= '9'; digit++ ){
                        if( isSafe(digit, i, j, board) == true ){
                            board[i][j] = digit;

                            bool solved = solve(board);

                            if ( solved == true ){
                                return true;
                            } else {
                                board[i][j] = '.';
                            }
                        }
                    }
                    // digit loop se bahar aa gaye matlab apne pichle soln me galti ki
                    return false;
                }
            }
        }
        // board complete -> ans aa gya
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};