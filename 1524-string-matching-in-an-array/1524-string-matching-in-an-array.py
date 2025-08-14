class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        l=set()
        for i in range(len(words)):
            for j in range(len(words)):
                if(words[i] in words[j] and i!=j ):
                    l.add(words[i])
                    break
        return list(l)
        