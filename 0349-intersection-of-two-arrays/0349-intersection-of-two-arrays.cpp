class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int>map;
        set<int> val;
        
        for(int i = 0; i < nums1.size(); i++){
            map[nums1[i]]++;
        }

        for(int i = 0; i < nums2.size(); i++){
            if(map.find(nums2[i]) != map.end()){
                val.insert(nums2[i]);
            }
        }

        vector<int> ans(val.begin(), val.end());
        return ans;
    }
};