class Solution {
public:
    string defangIPaddr(string address) {
        string k="";
        for (int i=0;i<address.size();i++){
            if(address[i]=='.'){
                k+="[.]";
            }
            else{
                k+=address[i];
            }
        }
        return k;
        
    }
};