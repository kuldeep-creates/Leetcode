class Solution:
    def alternateDigitSum(self, n: int) -> int:
        s=(str(n))[::-1]
        j=int(s)
        i=0
        k=0
        while(j):
            rem=j%10
            if(i%2!=0):
                k-=(rem)
            else:
                k+=rem
            j//=10
            i+=1
        return k


        