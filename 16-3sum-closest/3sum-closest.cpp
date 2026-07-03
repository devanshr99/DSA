class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int closest=nums[0]+nums[1]+nums[2];
        
      for(int i=0;i<nums.size()-2;i++){
         int j=i+1;
        int k=nums.size()-1;
        while(j<k){
            sum=nums[i]+nums[j]+nums[k];
            if((abs(target-sum))<(abs(closest-target))){
                closest=sum;
            }
              

            if(sum == target)
               return target;
            if(sum< target){
                j++;
            } 
        else{
              k--;
        }
           
        }
      }
        return closest;
    }    
};