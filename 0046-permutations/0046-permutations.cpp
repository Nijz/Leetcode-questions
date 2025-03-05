class Solution {
public:

    void sol(vector<int> &nums, int i, vector<vector<int>> &ans){

        if( i >= nums.size()-1){
            ans.push_back(nums);
            return;
        }

        for( int j = i; j <= nums.size()-1; j++){
            swap(nums[i], nums[j]);
            sol(nums,i+1, ans);
            swap(nums[i], nums[j]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int i = 0;   
        sol(nums, i, ans);
        return ans;
    }
};