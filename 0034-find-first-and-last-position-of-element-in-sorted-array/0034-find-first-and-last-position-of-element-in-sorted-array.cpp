class Solution {
public:

    void firstOccurance(vector<int> nums, int target, int &ansIndex){

        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;

        while(start <= end){

            if(nums[mid] == target){
                ansIndex = mid;
                end = mid - 1;
            } else if(nums[mid] < target){
                start = mid + 1;
            } else{
                end = mid - 1;
            }
            
            mid = start + (end - start) / 2;
        }
    }

    void lastOccurance(vector<int> nums, int target, int &ansIndex){

        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start)/ 2;

        while(start <= end){

            if(nums[mid] == target){
                ansIndex = mid;
                start = mid + 1;
            } else if(nums[mid] < target){
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            
            mid = start + (end - start) / 2;
        }
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        
        int firstOcc = -1;
        firstOccurance(nums, target, firstOcc);

        int lastOcc = -1;
        lastOccurance(nums, target, lastOcc);
        
        vector<int>ans(2);
        
        ans[0] = firstOcc;
        ans[1] = lastOcc;

        return ans;
    }
};