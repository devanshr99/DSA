class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        //  unordered_map<int,int>mp1;
        // unordered_map<int,int>mp2;
        // for(int x:nums1){
        //     mp1[x]++;
        // }
        // for(int y:nums2){
        //     mp2[y]++;
        // }
        // for(auto x:mp1){
        //     for(auto y:mp2){
        //         if(x.first==y.first){
        //             if(x.second<=y.second){
        //                 for(int i=0;i<x.second;i++){
        //                     ans.push_back(x.first);
        //                 }
        //             }
        //             else{
        //                 for(int i=0;i<y.second;i++){
        //                     ans.push_back(x.first);
        //                 }
        //             }
        //         }
        //     }
        // }
        // return ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        int n=nums1.size();
        int m=nums2.size();
        while(i<n&&j<m){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};