class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int max=*max_element(nums.begin(),nums.end());
       unordered_set<int> st(nums.begin(), nums.end());
       for(int i=k;i<=max+k;i=i+k){
             if(st.find(i)==st.end()){
                return i;
             }
       }
        return 0;
    }
};