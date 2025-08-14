class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int k=0;
        for (int l=0;l<jewels.size();l++){
            for( int s=0;s<stones.size();s++){
                if(jewels[l]==stones[s]){
                    k++;
                }
            }
        }
        return k;
        
    }
};