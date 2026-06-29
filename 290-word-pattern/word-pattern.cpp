class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp1;
        unordered_map<string,char>mp2;
        vector<string>str;
        stringstream ss(s);
        string word;
        while(ss>>word){
            str.push_back(word);
        }
        if(pattern.size()!=str.size()){
            return false;
        }
        for(int i=0;i<pattern.size();i++){
              if(mp1.find(pattern[i])!=mp1.end()){
                if(mp1[pattern[i]]!=str[i]){
                      return false;
                }
               
              }
               else{
                mp1[pattern[i]]=str[i];
              }
              if(mp2.find(str[i])!=mp2.end()){
                if(mp2[str[i]]!=pattern[i]){
                    return false;
                }
              }
              else{
                mp2[str[i]]=pattern[i];
              }
              
        }
        return true;
    }
};