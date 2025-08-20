class Solution:
    def getSum(self, a: int, b: int) -> int:
        check=0xFFFFFFFFFF
        MAX_INT = 0x7FFFFFFF 
        while b!=0:
            carry=(a&b)&check
            a=(a^b)&check
            b=(carry<<1)&check
        return a if a<MAX_INT  else ~(a^check)
        