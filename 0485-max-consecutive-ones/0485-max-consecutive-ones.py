class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        
        num=0
        count=0
        for i in nums:
            if i!=1:
                num=max(count,num)
                count=0
            else:
                count+=1
        num=max(count,num)
        
        return num
