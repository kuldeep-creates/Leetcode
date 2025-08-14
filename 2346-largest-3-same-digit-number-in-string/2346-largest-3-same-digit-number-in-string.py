class Solution:
    def largestGoodInteger(self, num: str) -> str:
        s=""
        for i in range(1,len(num)-1):
            if(num[i-1]==num[i] and num[i+1]==num[i]):
                s=max(s,num[i]*3)
                
        return s
        