class Solution:
    def smallestNumber(self, n: int) -> int:
        i=0
        while(i<=n):
            if(2**i>n):
                return (2**i)-1
            i+=1
        return 1
        