class Solution:
    def arraySign(self, nums: List[int]) -> int:
        k=1
        for i in nums:
            if(i==0):
                return 0
            if(i<0):
                k*=-1
            if(i>0):
                k*=1
        if(k<0):
            return -1
        return 1
        