class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int x:ransomNote){
            mp1[x]++;
        }
        for(int x:magazine){
            mp2[x]++;
        }
        bool findd=true;
        for(auto x:mp1){
            if(x.second>mp2[x.first]){
                findd = false;
            }
        }
        if(findd==true){
            return true;
        }
        else{
            return false;
        }

    }
};