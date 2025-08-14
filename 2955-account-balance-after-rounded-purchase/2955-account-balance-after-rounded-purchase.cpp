class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int rem=purchaseAmount%10;
        int rp=0;
        if(rem<5){
            rp=purchaseAmount-rem;
            return 100-rp;
        }
        rp=floor(purchaseAmount/10)*10+10;
        return 100-rp;


    
        
    }
};