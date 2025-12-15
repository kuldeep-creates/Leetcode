class Solution:
    def sumBase(self, n: int, k: int) -> int:
        sumOut=0
        while(n):
            sumOut+=n%k
            n//=k


        return sumOut
        