class Solution {
public:
    string toLowerCase(string s) {
       string ns;
        
        
        for(int i=0;i<s.size();i++){
           if(s[i] >= 65 && s[i]<=90){
            char a = s[i]|(1<<5);         
            ns += a;   
           }
            else{
                ns+= s[i];
            }
        }
        return ns;
    }
};