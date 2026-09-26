class Solution {
public:
int countW(string s) {
    int count = 0;

    for(char c : s) {
        if(c == 'W') {
            count++;
        }
    }

    return count;
}
    int minimumRecolors(string blocks, int k) {
         int i=0;
        int j=k-1;
        int mini=INT_MAX;
        while(j<blocks.size()){
            mini=min(mini,countW(blocks.substr(i,j-i+1)));
            i++;
            j++;

        }
        return mini;
        
    }
};