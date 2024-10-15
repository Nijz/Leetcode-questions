class Solution {
public:

    bool isVowel(char c){

        if
        ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
        ){
            return true;
        }

        return false;
    }

    string reverseVowels(string s) {
        
        int start = 0;
        int end = s.length() - 1;
        
        while(start <= end){
            if(isVowel(s[start]) && isVowel(s[end])){
                swap(s[start], s[end]);
                start++;
                end--;
            } else if(!isVowel(s[start])){
                start++;
            } else {
                end--;
            }
        }

        return s;
    }
};