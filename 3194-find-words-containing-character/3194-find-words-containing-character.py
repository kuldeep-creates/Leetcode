class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        L=[]
        for i in range(0,len(words)):
            if x in words[i] :
                L.append(i)
                
        return L
            
        