class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mid=low+(high-low)/2;
        int count=0;
        for(int low=0;low<=high;low++){
            if(nums[low]==nums[mid]){
                count++;
            }
        }
        if(count>1){
            return false;
        }
        else{
             return true;
        }
    }
};