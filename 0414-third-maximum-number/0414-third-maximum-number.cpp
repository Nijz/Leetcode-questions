class Solution {
public:
    int thirdMax(vector<int>& nums) {

        sort(nums.rbegin(), nums.rend());
        vector<int>arr;

        for(int i = 0; i < nums.size(); i++){
            if(i == 0 || arr.back() != nums[i]){
                arr.push_back(nums[i]);
            }
        }

        if(arr.size() < 3){
            return arr[0];
        }

        return arr[2];
    }
};