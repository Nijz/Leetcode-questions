class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int count = 0;
        int sum = 0;
        unordered_map<int, int> mp;
        mp.insert({0, 1});

        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[i];
            cout << " Sum => " << sum << endl;
            count = count + mp[sum - k];
            cout << " Mp - k => " << mp[sum - k] << endl;
            cout << " Count => " << count << endl;
            mp[sum]++;
            cout << " Mp => " << mp[sum] << endl;
        }
        return count;
    }
};

// Sum => 1
//  Count => 0
//  Mp => 1
//  Sum => 3
//  Count => 1
//  Mp => 1
//  Sum => 6
//  Count => 2
//  Mp => 1
