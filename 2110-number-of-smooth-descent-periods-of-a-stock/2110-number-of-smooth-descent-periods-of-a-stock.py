class Solution:
    def getDescentPeriods(self, prices: List[int]) -> int:
        
        currLength=1
        period=0

        for i in range(1,len(prices)):
            if(prices[i-1]==prices[i]+1):
                currLength+=1
            else:
                period+=int(currLength*((currLength+1)/2))
                currLength=1

        period+=int(currLength*((currLength+1)/2))

        return period
        
