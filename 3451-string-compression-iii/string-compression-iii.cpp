class Solution {
public:
    string compressedString(string word) {
        string comp;
        int i=0;
        while(i<word.size()){
            int count =1;
          while(i+count<word.size()&&word[i]==word[i+count]&&count<9){
            count++;
            }
            if(count>0){
                comp += char('0' + count);
                comp +=word[i];
            }
            i=i+count;

        }
        return comp;
    }
};