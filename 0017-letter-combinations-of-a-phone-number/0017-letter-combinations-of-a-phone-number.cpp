class Solution {
public:

    void solve(unordered_map<char, string> &m, vector<string> &ans, string digits, int i, string op){
        
        if (i >= digits.length() ){
            ans.push_back(op);
            return;
        }

        char digit = digits[i];
        string mappedStr = m[digit];

        for(char ch: mappedStr){
            op.push_back(ch);
            solve(m,ans,digits,i+1,op);
            // backtrack
            op.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        
        if(digits == ""){
            return ans;
        }

        unordered_map<char, string> m;
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";

        int i = 0;
        string op = "";

        solve(m, ans, digits, i, op);

        return ans;
    }
};