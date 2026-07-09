class Solution {
public:
    bool detectCapitalUse(string word) {
        bool isallupper=true;
        bool isalllower=true;
        bool isfirstupper=true;
           for(int i=0;i<word.size();i++){
              if(!isupper(word[i])){
                isallupper=false;
                break;
              }
           }
           for(int i=0;i<word.size();i++){
              if(!islower(word[i])){
                isalllower=false;
                break;
              }
           }
           if(!isupper(word[0]))
            isfirstupper = false;
           for(int i=1;i<word.size();i++){
              if(!islower(word[i])){
                isfirstupper=false;
                break;
              }
           }
          if(isallupper){
            return true;
          }
          else if(isalllower){
             return true;
          }
          else if(isfirstupper){
            return true;
          }
        
           return false;
    }
};