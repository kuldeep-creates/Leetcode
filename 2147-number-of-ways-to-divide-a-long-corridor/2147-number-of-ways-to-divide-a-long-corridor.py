class Solution:
    def numberOfWays(self, corridor: str) -> int:
        mod=10**9+7
        total_seats = corridor.count('S')
        if total_seats == 0 or total_seats % 2 != 0:
            return 0
        
        ways = 1
        seat_count = 0
        plant_count = 0
        section_formed = 0

        for i in corridor:
            if(i=='S'):
                seat_count+=1
                
                if(seat_count==2):
                    section_formed+=1
                    seat_count=0
                    
                    if(section_formed>1):
                        ways=(ways*(plant_count+1))%mod
                        plant_count=0
                    
            else:
                if(section_formed>=1 and seat_count==0):
                    plant_count+=1
                    
        return ways
                    
                
       
                
            
        
    
    
    
        