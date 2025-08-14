class Solution {
public:
    string toLowerCase(string s) {
        string k=s;
        for (char &i:k){
            i=tolower(i);
        }
        return k;
        
    }
};