class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        count=0
        for j in words:
            if j[:len(pref)]==pref:
                count+=1
        return count