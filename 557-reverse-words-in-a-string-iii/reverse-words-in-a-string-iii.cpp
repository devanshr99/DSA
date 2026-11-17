class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j=0;
        while(j<s.size()){
            if(s[j]!=' '){
                j++;
            }
            else{
                reverse(s.begin()+i,s.begin()+j);
                i=(j+1);
                j++;
            }
    }
    reverse(s.begin()+i,s.begin()+j);
    return s;

        }
        
};