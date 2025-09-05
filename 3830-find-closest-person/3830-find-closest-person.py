class Solution:
    def findClosest(self, x: int, y: int, z: int) -> int:
        timeone=abs(x-z)
        timesecond=abs(y-z)
        if(timeone<timesecond):
            return 1
        elif(timeone>timesecond):
            return 2
            
        return 0