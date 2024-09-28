class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0;
        int j = 0;
        set<int> val;
        while(i < nums1.size() && j < nums2.size()){

            if( nums1[i] == nums2[j]){
                val.insert(nums1[i]);
                i++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }

        vector<int> ans(val.begin(), val.end());
        return ans;
    }
};