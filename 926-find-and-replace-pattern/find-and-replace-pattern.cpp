class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        unordered_map<char,char>mp1;
        unordered_map<char,char>mp2;
        for(int i=0;i<words.size();i++){
            bool n=true;
            mp1.clear();
            mp2.clear();
            string temp=words[i];
            for(int j=0;j<temp.size();j++){
                if(mp1.find(temp[j])!=mp1.end()){
                    if(mp1[temp[j]]!=pattern[j]){
                        n=false;
                        break;
                    }
                }
                else{
                    mp1[temp[j]]=pattern[j];
                }
            
            if(mp2.find(pattern[j])!=mp2.end()){
                    if(mp2[pattern[j]]!=temp[j]){
                        n=false;
                        break;
                    }
                }
                else{
                    mp2[pattern[j]]=temp[j];
                }
            }
            if(n)
            ans.push_back(temp);
        }
        return ans;;
    }
};