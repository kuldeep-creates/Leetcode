class Solution {
public:
    int maxScore(string s) {
        vector<int>results;
        int length=s.size();
        int g=length;
        int zeros=0;
        int subs=0;
        while(g && subs<length-1){
            int ones=0;
            if(s[subs]=='0'){
                zeros+=1;
            }
            for (int k=length-1; k>subs; k--){
                if(s[k]=='1'){
                    ones+=1;
                    }
            }        
            results.push_back(ones+zeros);
            subs+=1;
            g-=1;
        }
        return *max_element(results.begin(),results.end());

        
    }
};