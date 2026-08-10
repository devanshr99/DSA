class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        vector<int>nums2;
        sort(nums.begin(),nums.end());
        for(int i=nums[0];i<=nums[n-1];i++){
            nums2.push_back(i);
        }
        int i=0;
        int j=0;
        while(i<n&&j<nums2.size()){
            if(nums[i]-nums2[j]==0){
                i++;
                j++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        
        return ans;
        
    }
};