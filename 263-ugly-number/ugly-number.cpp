class Solution {
public:
    bool isUgly(int n) {
        vector<int>ans;
        if(n<1){
            return false;
        }
        for(long long i=2;i*i<=n;i++){
               while(n%i==0){
                   ans.push_back(i);
                   n=n/i;
               }
        }
        if(n>1){
            ans.push_back(n);
        }
        for(int x:ans){
            if(x != 2 && x != 3 && x != 5){
                return false;
            }
        }
        return true;
    }
};