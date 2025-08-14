class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        r=min(a,b)
        c=0
        for i in range(1,r+1):
            if(a%i==0 and b%i==0):
                c+=1
        return c
        
        