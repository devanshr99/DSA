class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_set<int>st1(nums[0].begin(),nums[0].end());
        vector<int>ans;
        for(int i=1;i<nums.size();i++){
            unordered_set<int>st(nums[i].begin(),nums[i].end());
            for(auto it=st1.begin();it!=st1.end();){
                if(st.find(*it)==st.end()){
                    it=st1.erase(it);
                }
                else{
                    it++;
                }
            }
        }
        for(auto x:st1){
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
        return ans;
        
        
    }
};