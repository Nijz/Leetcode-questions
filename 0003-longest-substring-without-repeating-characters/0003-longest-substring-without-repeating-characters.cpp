class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char, int> map;
        int start = 0;
        int maxLength = 0;

        for(int i = 0; i < s.length(); i++){
            char c = s[i];

            if(map.find(c) != map.end() && map[c] >= start){
                start = map[c] + 1;
            }

            map[c] = i;
            maxLength = max(maxLength, i - start + 1);
        }

        return maxLength;
    }
};