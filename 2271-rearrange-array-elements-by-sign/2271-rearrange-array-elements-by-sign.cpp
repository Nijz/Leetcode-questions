class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> posNum;
        vector<int> negNum;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0){
                negNum.push_back(nums[i]);
            } else {
                posNum.push_back(nums[i]);
            }
        }

        int i = 0;
        int j = 0;

        while(j < nums.size()/2){
            ans.push_back(posNum[i]);
            i++;
            ans.push_back(negNum[j]);
            j++;
        }

        return ans;
    }
};