class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int x:nums1){
            mp1[x]++;
        }
        for(int y:nums2){
            mp2[y]++;
        }
        for(auto z:mp1){
            if(mp2.find(z.first)!=mp2.end()){
               ans.push_back(z.first);
            }
        }
           return ans;
    }
};