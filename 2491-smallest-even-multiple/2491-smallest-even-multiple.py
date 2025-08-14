class Solution:
    def smallestEvenMultiple(self, n: int) -> int:
        s=n
        while(s):
            if(s%2==0 and s%n==0):
                return s
            s*=2
        