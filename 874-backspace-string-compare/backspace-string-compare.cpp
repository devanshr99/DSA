class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i=0;
        int j=0;
        while(i<s.size()){
            if(s[i]=='#'){
                if(i==0){
                    s.erase(0,1);
                }
                else{
                    s.erase(i-1,2);
                    i--;
                }
            }
            else{
                i++;
            }
        }

        while(j<t.size()){
            if(t[j]=='#'){
                if(j==0){
                    t.erase(0,1);
                }
                else{
                    t.erase(j-1,2);
                    j--;
                }
            }
            else{
                j++;
            }
        }
        if(s==t){
            return true;
        }
        return false;
    }
};