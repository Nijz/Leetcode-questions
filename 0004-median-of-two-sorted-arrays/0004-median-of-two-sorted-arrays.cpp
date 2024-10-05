class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<double> ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0;
        int j = 0;

        while(i < nums1.size() && j < nums2.size()){

            if(nums1[i] < nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        if(i < nums1.size()){
            while(i < nums1.size()){
                ans.push_back(nums1[i]);
                i++;
            }
        }

        if(j < nums2.size()){
            while(j < nums2.size()){
                ans.push_back(nums2[j]);
                j++;
            }
        }

        for( int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }

        if(ans.size() % 2 == 0){
            double evenMedian = (ans[ans.size()/2] + ans[(ans.size()-2)/2])/2.0;
            return evenMedian;
        }

        double oddMedian = ans[ans.size() /2];

        return oddMedian;
    }
};