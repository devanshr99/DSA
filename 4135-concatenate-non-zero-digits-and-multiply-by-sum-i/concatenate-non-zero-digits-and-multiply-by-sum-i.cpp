class Solution {
public:
  long long sumAndMultiply(int n) {
    long long sum=0;;
    long long rev=0;
        while(n>0){
            long long digits=n%10;
            if(digits!=0){
                sum=sum+digits;
                rev=rev*10+digits;
            }
            n=n/10;
        }
        long long ans=0;
        while(rev>0){
            long long dig=rev%10;
            ans=ans*10+dig;
            rev=rev/10;
        }
        return ans*sum;
        
    }
};