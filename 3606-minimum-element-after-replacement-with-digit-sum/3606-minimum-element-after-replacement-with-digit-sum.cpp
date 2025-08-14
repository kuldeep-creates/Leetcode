class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int>sums;
        for (int i:nums){
            int k=0;
            while(i){
                int rem=i%10;
                k+=rem;
                i/=10;
            }
            sums.push_back(k);
        }
        return *min_element(sums.begin(),sums.end());
        
    }
};