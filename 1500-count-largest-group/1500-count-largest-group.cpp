class Solution {
public:
    int countLargestGroup(int n) {
        vector<int>hii(37,0);
        for(int i=1;i<=n;i++){
            long sum=0,n=i;
            while(n){
                sum+=n%10;
                n/=10;
            }
            hii[sum]++;
        }
        long count=1,maxs=0;
        for(int i=0;i<37;i++){
            if(hii[i]==maxs){
                count++;
            }
            if(maxs<hii[i]){
                maxs=hii[i];
                count=1;
            }

        }
        return count;

        
    }
};