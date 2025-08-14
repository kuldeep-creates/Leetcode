class Solution:
    def smallestRepunitDivByK(self, k: int) -> int:
        if(k%2==0 or k%5==0):
            return -1
        num=0
        cou=0
        while k:
            num=num*10+1
            cou+=1
            if(num%k==0):
                return cou
        return -1
        