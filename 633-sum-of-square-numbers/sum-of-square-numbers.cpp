class Solution {
public:
    bool judgeSquareSum(int c) {
        long long  n=sqrt(c);
        vector<long long>nums(n);
        
        for(long long i=0;i<=n;i++){
            nums.push_back(i);
        }
        long long i=0;
        long long  j=nums.size()-1;
        while(i<=j){
            if((nums[i]*nums[i])+(nums[j]*nums[j])==c){
                return true;
            }
            else if((nums[i]*nums[i])+(nums[j]*nums[j])<c){
                i++;
            }
            else{
                j--;
            }
        }
return false;
        
    }
};