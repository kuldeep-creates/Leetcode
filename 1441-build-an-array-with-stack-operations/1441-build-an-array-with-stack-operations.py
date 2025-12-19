class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        start=1
        stack=[]
        valid=[]
        i=0
        while (i<len(target)):
            stack.append(start)
            valid.append("Push")
            if(stack[-1]!=target[i]):
                valid.append("Pop")
            else:
                i+=1
            if(target==stack):
                return valid
            start+=1
        return valid


        