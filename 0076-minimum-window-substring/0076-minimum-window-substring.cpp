class Solution {
public:
    string minWindow(string s, string t) {

        if( s.size() < t.size()) return "";

        unordered_map<char, int> window, need;

        for(char c: t){
            need[c]++;
        }   

        int left = 0; 
        int start = 0;
        int needSize = need.size();
        int minLen = INT_MAX;
        int have = 0;

        for(int right = 0; right < s.size(); right++){
            
            char c = s[right];
            window[c]++;
            
            if(need.count(c) && window[c] == need[c]){
                have++;
            }

            while( have == needSize ){

                if((right-left+1) < minLen){
                    minLen = right - left + 1;
                    start = left;
                }

                char leftChar = s[left];
                window[leftChar]--;

                if(need.count(leftChar) && window[leftChar] < need[leftChar]){
                    have--;
                }

                left++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};