class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(char x:ransomNote){
            mp1[x]++;
        }
        for(char x:magazine){
            mp2[x]++;
        }
        for(auto x:mp1){
            if(x.second>mp2[x.first]){
                return false;
            }
        }
        
            return true;

    }
};