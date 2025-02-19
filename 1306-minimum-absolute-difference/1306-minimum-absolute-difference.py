class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        
        # Step 1: Sort Array
        arr.sort()

        # Step 2: Find Minium Diff
        min_diff = float('inf')

        for i in range(1, len(arr)):
            min_diff = min(min_diff, arr[i] - arr[i-1])

        #Step 3: Find pairs with min diff
        ans = []

        for i in range(1, len(arr)):
            if arr[i] - arr[i-1] == min_diff:
                ans.append([arr[i-1], arr[i]])

        return ans