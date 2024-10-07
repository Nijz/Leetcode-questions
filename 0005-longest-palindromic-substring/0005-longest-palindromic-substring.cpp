class Solution {
public:

    bool isPalindrom(string& s, int start, int end){

        while( start <= end ){
            if(s[start] != s[end]){
                return false;
            } 
            start++;
            end--;
        }

        return true;
    }

    string longestPalindrome(string s) {

        string ans = "";

        for(int i = 0; i < s.length(); i++){

            for(int j = i; j < s.length(); j++){

                if( isPalindrom(s, i, j) ){
                    string temp = s.substr(i, j - i + 1);
                    ans = temp.size() > ans.size() ? temp : ans;
                }
            }
        }

        return ans;
      
    }
};