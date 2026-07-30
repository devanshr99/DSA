class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int ,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto s:mp){
            if(s.second>1){
                ans.push_back(s.first);
                }

        }
        int missing;
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==0){
                missing=i;
            }
        }
        ans.push_back(missing);
        return ans;
        
    }
};