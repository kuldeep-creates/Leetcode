class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>n;
        if(num%3!=0){
            return n;
        }
        n.push_back(floor(num/3)-1);
        n.push_back(floor(num/3));
        n.push_back(floor(num/3)+1);
        return n;

        
    }
};