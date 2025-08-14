class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        sign1=-1 if dividend<0 else 1
        sign2=-1 if divisor<0 else 1
        r=abs(dividend)//abs(divisor)
        if(sign1*sign2*r<-2147483648):
            return -2147483648
        if(sign1*sign2*r>2147483647):
            return 2147483647
        return sign1*sign2*r
        