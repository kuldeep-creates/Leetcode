class Solution:
    def numberOfMatches(self, n: int) -> int:
        if(n==1):
            return 0
        if(n==2):
            return 1
        c=1
        while(n!=2):
            if(n%2==0):
                c+=(n-(n//2))
                n=(n-(n//2))
            else:
                c+=((n-1)//2)
                r=(n-1)//2+1
                n=r
        return c

        