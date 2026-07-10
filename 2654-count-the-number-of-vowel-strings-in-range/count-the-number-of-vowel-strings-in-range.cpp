class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int str=left;str<=right;str++){
            int n=words[str].size();
              if(words[str][0]=='a'||words[str][0]=='e'||words[str][0]=='i'||words[str][0]=='o'||words[str][0]=='u'){
                if(words[str][n-1]=='a'||words[str][n-1]=='e'||words[str][n-1]=='i'||words[str][n-1]=='o'||words[str][n-1]=='u'){
                    count++;
                }
              }
        }
        return count;
    }
};