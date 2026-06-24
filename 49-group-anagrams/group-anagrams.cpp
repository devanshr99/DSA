class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
             unordered_map<string,vector<string>>mp;

         for(string s:strs){
            string temp=s;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(s);
 }
 for(auto n:mp){
    ans.push_back(n.second);
 }
      return ans;
    }
};