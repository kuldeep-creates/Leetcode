class Solution {
public:
    int maximum69Number (int num) {
        string k=to_string(num);
        for (int i=0;i<k.size();i++){
            if(k[i]=='6'){
                k[i]='9';
                return stoi(k);
            }
        }
        return num;
        
    }
};