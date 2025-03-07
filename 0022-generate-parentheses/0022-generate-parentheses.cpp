class Solution {
public:

    void solve(vector<string> &ans, string op, int open, int close, int n){

        if(open+close == 2*n){
            ans.push_back(op);
            return;
        }

        if (open < n){
            solve(ans, op+"(", open+1, close, n);
        }

        if (close < open){
            solve(ans, op+")", open, close+1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string op = "";
        int open = 0;
        int close = 0;
        solve(ans, op, open, close, n);
        return ans;
    }
};