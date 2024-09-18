class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int sum = 0;
        int count = 0;

        unordered_map<int, int> mp;
        mp[0] = 1;
        
        for(int i = 0; i < nums.size(); i++){

            sum = (sum + nums[i]) % k;

            if( sum < 0 ){
                sum = sum + k;
            }

            count = count + mp[sum];
            mp[sum]++;
        }

        return count;
    }
};