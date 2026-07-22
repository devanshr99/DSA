class Solution {
public:
bool isvowel(char c){
            c=tolower(c);
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                return true;
            }
            return false;
           }
    string reverseVowels(string s) {
        // int i=0;
        // int j=s.size()-1;
        // while(i<j){
        //     if(((s[i]=='a'||s[i]=='A')||(s[i]=='e'||s[i]=='E')||(s[i]=='i'||s[i]=='I')||(s[i]=='o'||s[i]=='O')||(s[i]=='u'||s[i]=='U'))&&((s[j]=='a'||s[j]=='A')||(s[j]=='e'||s[j]=='E')||(s[j]=='i'||s[j]=='I')||(s[j]=='o'||s[j]=='O')||(s[j]=='u'||s[j]=='U'))){
        //         swap(s[i],s[j]);
        //         i++;
        //         j--;
        //     }
        // else if(((s[j]!='a'&&s[j]!='A')||(s[j]!='e'||s[j]!='E')||(s[j]!='i'||s[j]!='I')||(s[j]!='o'||s[j]!='O')||(s[j]!='u'||s[j]!='U'))){
        //         j--;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        // return s;

        
        int i=0;
         int j=s.size()-1;
         while(i<j){
            if(isvowel(s[i])&&isvowel(s[j])){
                swap(s[i],s[j]);
                 i++;
                 j--;
            }
            else if(!isvowel(s[j])){
                j--;
            }
            else{
                i++;
            }
         }
        return s;
    }
};