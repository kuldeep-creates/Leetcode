class Solution:
    def lengthOfLastWord(self, s: str) -> int:

        r=s.split()
        k=len(r[len(r)-1])
        return k
        
        