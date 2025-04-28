class Solution {
public:
    string countAndSay(int n) {
        // Base Case
        if(n==1) return "1";

        // Recursive Call
        string prev = countAndSay(n-1);

        // Run Length Encoding
        string result = "";
        int count = 1;

        for(int i = 1; i < prev.length(); i++) {
            if(prev[i] == prev[i-1]){
                count++;
            } else {
                result += to_string(count) + prev[i-1];
                count = 1;
            }
        }

        result += to_string(count) + prev.back();
        return result;
    }
};