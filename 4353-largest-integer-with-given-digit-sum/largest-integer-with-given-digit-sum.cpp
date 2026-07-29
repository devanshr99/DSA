class Solution {
public:
int sumdigit(int n){
   int sum=0;
    while(n>0){
        int l=n%10;
        sum=sum+l;
        n=n/10;
    }
    return sum;
}
    int largestInteger(int n, int s) {
        if(s==0){
            return 0;
        }
       vector<int>digit={9, 99, 999, 9999, 99999};
       for(int j=digit[n-1];j>=1;j--){
            if(sumdigit(j)==s){
                return j;
            }
       }
        
       
       
return -1;
        

    }
};