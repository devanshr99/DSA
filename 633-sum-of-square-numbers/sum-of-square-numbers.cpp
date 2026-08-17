class Solution {
public:
    bool judgeSquareSum(int c) {
        long long  n=sqrt(c);
        // vector<long long>nums(n);
        
        // for(long long i=0;i<=n;i++){
        //     nums.push_back(i);
        // }
        long long i=0;
        long long j=n;
        while(i<=j){
            if((i*i)+(j*j)==c){
                return true;
            }
            else if((i*i)+(j*j)<c){
                i++;
            }
            else{
                j--;
            }
        }
return false;
        
    }
};