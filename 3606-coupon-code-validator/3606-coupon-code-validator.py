class Solution:
    def validateCoupons(self, code: List[str], businessLine: List[str], isActive: List[bool]) -> List[str]:
        
        
        order=["electronics", "grocery", "pharmacy", "restaurant"]
        orders=defaultdict(list)
        l=[]
        for i in range(len(code)):
            if(len(code[i])>0 and isActive[i]==True):
                
                isvalid=True
                for j in code[i]:
                    if( not (j.isdigit() or j.isalpha() or j=="_") ):
                        isvalid = False
                        break  
                        
                if(isvalid):
                    orders[businessLine[i]].append(code[i])
                    
        for i in order:
            orders[i].sort()
            l.extend(orders[i])
        
        return l
        
                        
                
                 