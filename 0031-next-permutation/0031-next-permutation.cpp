class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        // Take index var to store Breakout Dip from end of array 
        int index = -1;
        int n = nums.size();

        // Step 1: Find that breakout dip from end of array 
        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }

        // Step 2: index is unchanged then no possible next permutation
        if(index == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: check for the smallest element after the breakout part
        for(int i = n-1; i > index; i--) {
            if(nums[i] > nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }

        // Step 4: Reverse the after index arry to make it in a sorted
        reverse(nums.begin() + index + 1, nums.end());
        return;
    }
};