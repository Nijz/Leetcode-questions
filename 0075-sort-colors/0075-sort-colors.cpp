class Solution {
public:
    void sortColors(vector<int>& nums) {

        int left = 0;
        int medium = 0;
        int right = nums.size() - 1;

        while (medium <= right) {

            if (nums[medium] == 0) {
                swap(nums[medium], nums[left]);
                left++;
                medium++;
            } else if (nums[medium] == 1) {
                medium++;
            } else {
                swap(nums[right], nums[medium]);
                right--;
            }
        }
    }
};