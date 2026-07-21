class Solution {
public:
bool isPalindrome(string &s, int i, int j) {
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
    string longestPalindrome(string s) {
    string ans = s.substr(0,1);
        int i=0;
        while(i<s.size()){
            int j=i+1;
            while(j<s.size()){
            if(s[i]==s[j]){
                 if(isPalindrome(s,i,j) ){
                    if (j - i + 1 > ans.size()) {
                            ans = s.substr(i, j - i + 1);
                 }

            }
                      
            }
             j++;
            }
            i++;

        }
        
return ans;
        
        
    }
};