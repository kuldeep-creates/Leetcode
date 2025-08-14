class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        k=0
        for j in jewels:
            for s in stones:
                if(j==s):
                    k+=1
        return k
        