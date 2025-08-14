class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        int z = 0;
        int c = 0;
        int k = 1;
        vector<int> arr(n); 
        arr.push_back(c);
        arr.push_back(k);
        
        for (int i = 2; i < n; i++) {
            int r = c + k;
            c = k;
            k = r;
            arr.push_back(r);
        }
        z = arr[arr.size()-1] + arr[arr.size()-2];
        return z;
    }
};