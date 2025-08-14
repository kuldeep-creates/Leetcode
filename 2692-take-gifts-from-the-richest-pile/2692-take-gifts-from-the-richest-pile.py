class Solution:
    def pickGifts(self, gifts: List[int], k: int) -> int:
        while(k>0):
            r=max(gifts)
            for i in range(len(gifts)):
                if(r==gifts[i]):
                    gifts[i]=int(r**0.5)
                    k-=1
                    break
        
        return sum(gifts)

        