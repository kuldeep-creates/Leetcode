class Solution:
    def reverseBits(self, n: int) -> int:
        n=int(n)
        k=31
        num=0
        while(n>0):
            rem=(n&1)
            num+=rem*(2**k)
            k-=1
            n>>=1
        return num
        