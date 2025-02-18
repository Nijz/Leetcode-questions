class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        
        # ans = [0] * len(nums)
        # print(ans)

        # left = 0
        # right = len(nums) - 1

        # for i in range(len(nums)-1, -1, -1):
            
        #     if abs(nums[left]) > abs(nums[right]):
        #         ans[i] = nums[left] ** 2
        #         left += 1
        #     else:
        #         ans[i] = nums[right] ** 2
        #         right -= 1
        
        # return ans 

        ans = []

        for i in nums:
            ans.append(i*i)      

        ans.sort()

        return ans