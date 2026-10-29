class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total = accumulate(nums.begin(),nums.end(),0);
      int leftsum=0;
      for(int i=0;i<nums.size();i++){
        total=total-nums[i];
        
        if(total==leftsum){
            return i;
        }
        leftsum+=nums[i];
      }
      return -1;
    }
};