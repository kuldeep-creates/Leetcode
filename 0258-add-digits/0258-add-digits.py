class Solution:
    def addDigits(self, num: int) -> int:
        
        
        while(num):
            c=0
            while(num):
                n=num%10
                c+=n
                num//=10
            if(c//10!=0):
                num=c
            else:
                return c
        return num

        