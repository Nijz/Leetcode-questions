class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if(nums.size() == 1){
            return nums[0];
        }

        int sum = 0;
        int max_sum = INT_MIN;

        for(int i = 0; i < nums.size(); i++){

            sum = sum + nums[i];
            max_sum = max(max_sum, sum);
            
            if ( sum < 0 ){
                sum = 0;
            }
        }

        return max_sum;
    }
};