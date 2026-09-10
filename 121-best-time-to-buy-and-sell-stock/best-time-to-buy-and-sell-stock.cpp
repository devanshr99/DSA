class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();

    int mini =prices[0];
    int maaxx =0;

    for(int i=1;i<n;i++) {
        maaxx = max(maaxx,prices[i]-mini);
        mini = min(mini,prices[i]);
    } 
    return maaxx;
    }
    
};