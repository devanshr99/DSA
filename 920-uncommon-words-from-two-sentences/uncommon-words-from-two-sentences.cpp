class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
    vector<string>ans;
    map<string,int>mp;
    vector<string>words;
    
        int i=0;
        string word="";
        while(i<s1.size()){
            if(s1[i]!=' '){
                word+=s1[i];
                i++;
            }
            else{
                words.push_back(word);
                word="";
                i++;
            }
    }
     if(word!=""){
       words.push_back(word);
    }
   i=0;
  word="";
   while(i<s2.size()){
            if(s2[i]!=' '){
                word+=s2[i];
                i++;
            }
            else{
                words.push_back(word);
                word="";
                i++;
            }
    }
     if(word!=""){
       words.push_back(word);
    }
    for(int j=0;j<words.size();j++){
      mp[words[j]]++;
    }
    for(auto x:mp){
            if(x.second==1){
                ans.push_back(x.first);
                
            }
        }
        return ans;
    }
};