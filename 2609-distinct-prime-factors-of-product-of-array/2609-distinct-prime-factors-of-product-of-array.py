class Solution:
    def distinctPrimeFactors(self, nums: List[int]) -> int:
        s=set()
        for i in nums:
            for j in range(2,i+1):
                while(i%j==0):
                    s.add(j)
                    i//=j
            
        return len(s)
        
        