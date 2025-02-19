class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        vector<int> ans;

        // Count frequency of each number
        for(int num : nums) {
            map[num]++;  // This automatically handles both insertion and increment
        }

        for (auto it = map.begin(); it != map.end(); ++it) {
           cout << it->first << ": " << it->second << endl;
        }

        // Create vector of pairs to sort by frequency
        vector<pair<int, int>> freq;
        for(const auto& pair : map) {
            cout << pair.first << " - " << pair.second << endl; 
            freq.push_back({pair.second, pair.first}); // {frequency, number}
        }

        // Sort in descending order by frequency
        sort(freq.begin(), freq.end(), greater<pair<int,int>>());

        // Take top k elements
        for(int i = 0; i < k; i++) {
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};