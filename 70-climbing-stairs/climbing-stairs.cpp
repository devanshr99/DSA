class Solution {
public:
    int climbStairs(int n) {
        
        int a=1;
        int b=2;
        for(int i=3;i<=45;i++){
            int sum=a+b;
            if(n==i){
                
                return sum;
                break;
            }
            a=b;
            b=sum;

        }
        return n;
         
    }
};