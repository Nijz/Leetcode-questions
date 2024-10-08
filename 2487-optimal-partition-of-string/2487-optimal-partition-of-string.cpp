class Solution {
public:
    int partitionString(string s) {
        
        unordered_set<char>os;
        int count = 1;

        for(int i = 0; i < s.length(); i++){

            char c = s[i];

            if(os.find(c) != os.end()){
                count++;
                os.clear();
            }

            os.insert(c);
        }

        return count;
        
    }
};