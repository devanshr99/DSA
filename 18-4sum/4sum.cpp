class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if (nums.size()<4)
                return {};
        for(int i=0;i<n-3;i++){
            int j=i+1;
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            for(j=i+1;j<n-2;j++){
               int k=j+1;
                int l=nums.size()-1;
                if(j>i+1 && nums[j]==nums[j-1]){
                continue;
            }
                while(k<l){
                    long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                        while(k<l&& nums[k]==nums[k-1]){
                            k++;
                        }
                        while(k<l&& nums[l]==nums[l+1]){
                            l--;
                        }
                    }
                else if(sum<target){
                       k++;
                } 
                    else{
                        l--;
                    }
                }
            }

        }
        return ans;
    }
};