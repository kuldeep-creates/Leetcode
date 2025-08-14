class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        r=set(nums)
        s=list(r)
        s.sort()
        if(len(s)<3):
            return s[-1]
        return s[-3]
        