class Solution:
    def accountBalanceAfterPurchase(self, purchaseAmount: int) -> int:
        rem=purchaseAmount%10
        if(rem<5):
            r=purchaseAmount-rem
            return 100-r 
        rp=(purchaseAmount//10)*10+10
        return 100-rp
        