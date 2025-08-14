class Solution:
    def findGCD(self, nums: List[int]) -> int:
        ma=max(nums)
        mi=min(nums)
        while(mi!=0):
            rem=mi
            mi=ma%mi
            ma=rem
        return ma       