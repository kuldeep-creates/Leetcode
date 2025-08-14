class Solution:
    def minElement(self, nums: List[int]) -> int:
        l=[]
        for i in nums:
            k=0
            while(i):
                rem=i%10
                k+=rem
                i//=10
            l.append(k)
        return min(l)