class Solution:
    def isWinner(self, player1: List[int], player2: List[int]) -> int:
        sum1=0
        sum2=0
        for i in range(len(player1)):
            if i>=1 and player1[i-1]==10 :
                sum1+=(2*player1[i])
            elif i>=2 and player1[i-2]==10:
                sum1+=(2*player1[i])
            else:
                sum1+=player1[i]
        for i in range(len(player1)):
            if i>=1 and player2[i-1]==10 :
                sum2+=(2*player2[i])
            elif i>=2 and player2[i-2]==10:
                sum2+=(2*player2[i])
            else:
                sum2+=player2[i]
        if(sum1>sum2):
            return 1
        if(sum1<sum2 ):
            return 2
        return 0
    
    

        