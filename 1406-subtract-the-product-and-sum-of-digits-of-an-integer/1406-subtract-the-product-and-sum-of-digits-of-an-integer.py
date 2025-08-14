class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        l=0
        k=1
        while(n):
            r=n%10
            l+=r
            k*=r
            n//=10
        return k-l
        