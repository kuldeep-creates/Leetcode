class Solution:
    def sumOfEncryptedInt(self, nums: List[int]) -> int:
        def cry(k):
            r=0
            m=0
            while(k):
                m=max(m,k%10)
                r=10*r+1
                k//=10
            return m*r
        for i in range(len(nums)):
            nums[i]=cry(nums[i])
        return sum(nums)
        