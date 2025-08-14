class Solution:
    def getFinalState(self, nums: List[int], k: int, multiplier: int) -> List[int]:
        for i in range(k):
            l=nums.index(min(nums))
            nums[l]*=multiplier
        return nums
        