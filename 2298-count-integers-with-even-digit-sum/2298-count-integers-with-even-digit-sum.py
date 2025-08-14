class Solution:
    def countEven(self, num: int) -> int:
        j=0
        for i  in range(2,num+1):
            s=0
            while(i):
                r=i%2
                s+=r
                i//=10
            if(s%2==0):
                j+=1
        return j
        
              
        

        