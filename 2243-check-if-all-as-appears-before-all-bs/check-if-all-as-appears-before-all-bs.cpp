class Solution {
public:
    bool checkString(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i]=='b'){
                if(s[j]=='a'){
                    return false;
                }
                else{
                    j--;
                }
            }
            else{
                i++;
            }
        }
       return true;
        
    }
};