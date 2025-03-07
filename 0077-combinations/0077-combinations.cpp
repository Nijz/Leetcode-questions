class Solution {
public:

    void solve(vector<vector<int>>&ans, vector<int> &temp, int k, int start, int n){

        if(k == 0){
            ans.push_back(temp);
            return;
        }

        for(int i = start; i <= n; i++){
            temp.push_back(i);
            solve(ans, temp, k-1, i+1, n);
            temp.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>>ans;
        vector<int> temp;
        solve(ans, temp, k, 1, n);
        return ans;
    }
};