class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int start = 1;
        int end = nums.size() - 2;

        if (nums.size() == 1) {
            return nums[0];
        }

        if (nums[0] != nums[start]) {
            return nums[0];
        } else if (nums[nums.size() - 1] != nums[end]) {
            return nums[end+1];
        }

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }

            if ((mid % 2 == 0 && nums[mid] == nums[mid + 1])
                || (mid % 2 == 1 && nums[mid] == nums[mid - 1])) {
                    start = mid + 1;
                } else {
                end = mid - 1;
            }
        }

        return -1;
    }
};