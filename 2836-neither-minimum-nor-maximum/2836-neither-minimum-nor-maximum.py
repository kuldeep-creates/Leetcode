class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        r=max(nums)
        s=min(nums)
        for i in nums:
            if(i<r and i>s):
                return i
        
        return -1 
        