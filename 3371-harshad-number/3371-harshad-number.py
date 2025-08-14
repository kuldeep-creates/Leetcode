class Solution:
    def sumOfTheDigitsOfHarshadNumber(self, x: int) -> int:
        sum=0
        r=x
        while(x):
            rem=x%10
            sum+=rem
            x//=10
        if(r%sum==0):
            return sum
        return -1
        