class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        while(True):
            k=1
            i=n
            while(i):
                rem=i%10
                k*=rem
                i//=10
            if(k%t==0):
                return n
            n+=1
        