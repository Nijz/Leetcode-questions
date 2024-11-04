class Solution {
public:
    string compressedString(string word) {
        
        int start = 0; 
        int end = 0;
        int count = 0;
        string ans = "";

        while(end < word.length()){

            if(word[start] != word[end] || count >= 9 ){
                cout << "count = " << count << endl;
                ans += to_string(count);
                ans.push_back(word[start]);
                start = end;
                count = 0;
            } else if( word[start] == word[end]){
                end++;
                count++;
            }

           
        }

        ans += to_string(count);
        ans.push_back(word[start]);

        return ans;
    }
};