class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        
        l, r = 0, len(numbers)-1
        ans = []

        while l < r:

            if numbers[l] + numbers[r] == target:
                ans.append(l+1)
                ans.append(r+1)
                return ans
            
            if numbers[l] + numbers[r] < target:
                l += 1
            else:
                r -= 1
        
        return