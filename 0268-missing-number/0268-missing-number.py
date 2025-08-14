class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        k=sum(nums)
        s=(1+len(nums))*len(nums)/2
        return int(s-k)
        