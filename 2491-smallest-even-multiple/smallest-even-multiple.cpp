class Solution {
public:
    int smallestEvenMultiple(int n) {
        
 int ans=std::gcd(2,n);
 if(ans==1){
    return 2*n;
 }
 else{
    return n;
 }

        
    }
};