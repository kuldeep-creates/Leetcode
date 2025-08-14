class Solution:
    def isHappy(self, n: int) -> bool:
        l=[]
        s=n
        while(n!=1 and n not in l):
            l.append(n)
            z=0
            while(n):
                num=n%10
                z+=(num**2)
                n//=10
            if(z==1):
                return True
            n=z
        if (n==1):
            return True
        return False  


        
        
        