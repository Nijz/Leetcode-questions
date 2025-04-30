class Solution {
public:
    char findTheDifference(string s, string t) {
        
        if(s.size() == 0){
            char c = t[0];
            return c;
        }

        unordered_map<char, int>m;

        for(char c: t){
            m[c]++;
        }

        for(char c: s){
            
            m[c]--;

            if(m[c] == 0){
                m.erase(c);
            }
        }

        return m.begin()->first;
    }
};