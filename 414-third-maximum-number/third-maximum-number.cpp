class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        vector<int> v(st.begin(), st.end());

        sort(v.begin(), v.end());
        int n=v.size();
        if(n<3){
            return v[n-1];

        }
        else{
            return v[n-3];
        }
        
    }
};