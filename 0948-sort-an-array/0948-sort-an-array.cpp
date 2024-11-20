class Solution {
public:

    void merge(vector<int>& nums, int start, int end, int mid){

        int leftln = mid - start+1;
        int rightln = end-mid;
        int mainIndex= start;

        int *leftArr = new int[leftln];
        int *rightArr = new int[rightln];

        for(int i = 0; i < leftln; i++){
            leftArr[i] = nums[mainIndex];
            mainIndex++;
        }

        for(int i = 0; i < rightln; i++){
            rightArr[i] = nums[mainIndex];
            mainIndex++;
        }

        int i = 0;
        int j = 0;
        int index = start;

        while(i < leftln && j < rightln){
            if(leftArr[i] < rightArr[j]){
                nums[index] = leftArr[i];
                index++;
                i++;
            } else {
                nums[index] = rightArr[j];
                index++;
                j++;
            }
        }

        while(i < leftln){
            nums[index] = leftArr[i];
            index++;
            i++;
        }

        while(j< rightln){
            nums[index] = rightArr[j];
            index++;
            j++;
        }

    }

    void mergeSort(vector<int>& nums, int start, int end){
        
        if(start >= end){
            return;
        }

        int mid = (start + end)/2;

        mergeSort(nums, start, mid);
        mergeSort(nums, mid+1, end);

        merge(nums, start, end, mid);
    }

    vector<int> sortArray(vector<int>& nums) {
        
        int start = 0;
        int end = nums.size() - 1;
        mergeSort(nums, start, end);
        return nums;
    }
};