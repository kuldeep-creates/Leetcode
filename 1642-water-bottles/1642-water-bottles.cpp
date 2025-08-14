class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total=0;
        while(floor(numBottles/numExchange)){
            int rem=floor(numBottles/numExchange);
            int rem1=numBottles%numExchange;
            total+=(numBottles-rem1);
            numBottles=rem+rem1;
    } 
        total+=numBottles;
        return total;
        
    }
};