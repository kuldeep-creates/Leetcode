class Solution:
    def averageValue(self, nums: List[int]) -> int:
        c=0

        k=0
        for i in nums:
            if(i%6==0):
                k+=i
                c+=1
        if(c==0):
            return 0
        return k//c
        