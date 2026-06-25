class Solution {
public:
int squareDigitSum(int n) {
    int sum = 0;

    while (n > 0) {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }

    return sum;
}

    bool isHappy(int n) {
        unordered_set<int>st;
       int sum=squareDigitSum(n);
       while(sum>=1){
      
        if(sum==1){
            return true;
        }
        if(st.find(sum)!=st.end()){
            return false;
        }
        st.insert(sum);
        n=sum;
        sum=squareDigitSum(n);
       }
       return false;
    }
};