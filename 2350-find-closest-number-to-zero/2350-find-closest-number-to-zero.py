class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        l=[]
        for i in range(len(nums)):
            l.append(abs(nums[i]))
        r=min(l)
        close=[]
        for i in nums:
            if(abs(i)==r):
                close.append(i)
        return max(close)