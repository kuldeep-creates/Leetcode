class Solution:
    def differenceOfSum(self, nums: List[int]) -> int:
        s=sum(nums)
        c=0
        for i in nums:
            while(i):
                rem=i%10
                c+=rem
                i//=10
        return abs(s-c)

        