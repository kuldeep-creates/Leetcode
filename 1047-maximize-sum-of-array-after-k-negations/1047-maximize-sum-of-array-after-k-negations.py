class Solution:
    def largestSumAfterKNegations(self, nums: List[int], k: int) -> int:
        for i in range(k):
            l=min(nums)
            r=nums.index(l)
            nums[r]=-l
        return sum(nums)
        