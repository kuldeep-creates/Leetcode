class Solution:
    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:
        total=0
        while(numBottles//numExchange):
            rem=numBottles//numExchange
            rem1=numBottles%numExchange
            total+=(numBottles-rem1)
            numBottles=rem+rem1
            
        total+=numBottles
        return total

        