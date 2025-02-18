class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        temp = nums.copy()
        temp.sort()
        d = {}

        for i, num in enumerate(temp):
            if num not in d:
                d[num] = i

        ans = []
        for num in nums:  
            ans.append(d[num])
        
        return ans