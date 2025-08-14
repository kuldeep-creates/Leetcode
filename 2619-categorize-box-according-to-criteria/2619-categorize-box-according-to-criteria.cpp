class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        if(length<=100000&&width<=100000&&height<=100000&&mass<=1000){
        long long volume=static_cast<long long>(length)*width*height;
        string r1="",r2="";

        if(length>=10000||width>=10000||height>=10000||volume>=1000000000){
          r1="Bulky";
          
        }
        if(mass>=100){
            r2="Heavy";}
        if(r1=="Bulky" && r2=="Heavy"){
            return "Both";
        }
        else if(r1!="Bulky" && r2=="Heavy"){
            return "Heavy";
        }
        else if(r1=="Bulky"&& r2!="Heavy"){
            return "Bulky";
        }
        else{
            return "Neither";
        }}
        return  "Neither";
        
    }
};