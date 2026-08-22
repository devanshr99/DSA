class Solution {
public:
long long sumvalues(int n){
    long long sum=0;
    long long prod=1;
    long long ans=0;
    while(n>0){
        sum=sum+(n%10);
        prod=prod*(n%10);
        n=n/10;
    }
    ans=ans+(sum+prod);
    return ans;

}
    bool checkDivisibility(int n) {
        long long a=sumvalues(n);
        if(n%a==0){
            return true;
        }
        
             return false;
     
    }
};