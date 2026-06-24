class Solution {
public:
    bool isAnagram(string s, string t) {
        //THIS IS BRUTFORCE METHOD
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t){
        //     return true;
        // }
        // return false;

        unordered_map<char, int> mp1;

           for(char ch : s) {
                mp1[ch]++;
}
 unordered_map<char, int> mp2;

           for(char ch : t) {
                mp2[ch]++;
}
        if(mp1==mp2){
            return true;
        }
         return false;
    }
};