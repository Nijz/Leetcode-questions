class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        int i = 0; 
        int j = 0; 

        while(j < magazine.length()){
            if(ransomNote[i] == magazine[j]){
                i++;
                j++;
            } else {
                j++;
            }
        }

        if(i == ransomNote.length()){
            return true;
        } 

        return false;
    }
};