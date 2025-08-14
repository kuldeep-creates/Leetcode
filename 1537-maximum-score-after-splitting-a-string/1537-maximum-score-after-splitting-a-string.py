class Solution:
    def maxScore(self, s: str) -> int:
        l=[]
        length=len(s)
        g=length
        zeros=0
        subs=0
        while(g and subs<length-1):
            ones=0
            if(s[subs]=="0"):
                zeros+=1
            for k in range(length-1,subs,-1):
                if(s[k]=="1"):
                    ones+=1
            l.append(ones+zeros)
            subs+=1
            g-=1
        return max(l)

        