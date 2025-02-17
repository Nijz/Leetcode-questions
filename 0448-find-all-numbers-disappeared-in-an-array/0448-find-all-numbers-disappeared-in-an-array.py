class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        
        lstSet = set(nums)
        
        notInLst = []
        
        for i in range(1,len(nums)+1):
        
            if i not in lstSet:
                notInLst.append(i)
        
        return notInLst
        