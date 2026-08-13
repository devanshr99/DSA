class Solution {
public:

    int tribonacci(int n) {
        if(n==0){
        return n;
    }
    else if(n==1||n==2){
        return 1;
    }
    int a=0;
    int b=1;
    int c=1;
    int sum=0;

        for(int i=3;i<=37;i++){
            sum=a+b+c;
            if(n==i){
              return sum;
              break;
            }
           
            a=b;
            b=c;
            c=sum;

        }
       return 0;
    }
};