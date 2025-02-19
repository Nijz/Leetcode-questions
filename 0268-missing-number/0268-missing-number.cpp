class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> seen;

        for(int n: nums){
            seen.insert(n);
        }

        for(int i = 0; i <= nums.size(); ++i){
            if(!seen.count(i)){
                return i;
            }
        }
        
        return -1;
    }
};