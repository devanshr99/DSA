class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>ans;
        int i=0;
        while(i<chars.size()){
            int count=1;
            while(i+count<chars.size()&&chars[i]==chars[i+count]){
                count++;
            }
            ans.push_back(chars[i]);

            if(count>1) {
                string s =to_string(count);

                for(char c : s) {
                    ans.push_back(c);
                }
            }
            i=i+count;
        }
        for(int i=0;i<ans.size();i++){
            chars[i]=ans[i];
        }
        return ans.size();
        
    }
};