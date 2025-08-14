class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        l=[]
        for i in range(left,right+1):
            k=i
            r=True
            while(k):
                rem=k%10
                if(rem==0):
                    r=False
                    break
                if(i%rem!=0):
                    r=False
                    break
                k//=10
            if(r==True):
                l.append(i)
        return l
            
        