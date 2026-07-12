class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target)
        //     ans.push_back(i);

        // }

        // return ans ;
        //TAKE O(nlogn) BECAUSE OF SORTING 
        int less=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target){
                less++;
            }
             else if(nums[i]==target){
                count++;
            }
        }
             for(int i=less;i<count+less;i++){
            ans.push_back(i);
        }
        
        return ans;
    }
};