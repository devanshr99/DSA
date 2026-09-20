class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
for(int i=0;i<s.size();i++){
    int a=((27-(s[i]-'a'+1))*(i+1));
    sum=sum+a;
}
        return sum;
    }
};