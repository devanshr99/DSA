class Solution {
public:
    string reverseWords(string s) {
        string ans="";

        reverse(s.begin(),s.end());
     int i=0;
        
        while(i<s.size()){
            string word="";
            while(i<s.length()&&s[i]!=' '){
            word +=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0){
            ans += " " + word;
           
        

        }
        i++;
        
}
return ans.substr(1);
        
    }
};