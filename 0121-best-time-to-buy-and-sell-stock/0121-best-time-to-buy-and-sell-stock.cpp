class Solution {
public:
    int maxProfit(vector<int>& arr) {

        int buy = arr[0];
        int profit = 0;
        int n = arr.size();
       
        for(int i = 1; i < n; i++){
            
            if(buy > arr[i]){
                buy = arr[i];
            }

            profit = max(profit, arr[i] - buy);
        }

        return profit;

    }
};