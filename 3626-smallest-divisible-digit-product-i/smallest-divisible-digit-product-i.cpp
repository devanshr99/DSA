class Solution {
public:
int product(int a){
      int prod=1;
           while(a>0){
                prod=prod*(a%10);
            a=a/10;
}
return prod;
}
    int smallestNumber(int n, int t) {
       for(int i=n;i<=100;i++){
        int p=product(i);
        if(p%t==0){
            return i;
        }
       }
       return 0;
    }
    
};