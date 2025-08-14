class Solution:
    def sumOfThree(self, num: int) -> List[int]:
        k=0
        n=num
        l=[]
        while(num):
            rem=num%10
            k+=rem
            num//=10
        if(k%3==0):
            l.append((n//3)-1)
            l.append(n//3)
            l.append((n//3)+1)
        return l
            
        
        
        