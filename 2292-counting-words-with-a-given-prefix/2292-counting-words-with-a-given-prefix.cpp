class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
            for (string j:words){
            int k=0;
            for (int i=0;i<pref.length();i++){
                if(j.length()<pref.length()){
                    k=1;
                    break;
                }
                if(j[i]!=pref[i]){
                    k=1;
                    break;
                }
            }
            if(k==0){
                count++;
            }


        }
        return count;
    }
};