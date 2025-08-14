class Solution:
    def reverse(self, x: int) -> int:
        n=0
        sign=-1 if x<0 else 1
        x=abs(x)
        while(x):
            r=x%10
            if(n>214748364 or n<-214748364):
                return 0
            n=n*10+r
            x//=10
        
        return sign*n

        
        
        