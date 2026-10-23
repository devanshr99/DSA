class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        vector<int>ans;
        int c=-1;
        if(is_sorted(nums.begin(),nums.end(),greater<int>())){
          return 0;
}
else if(is_sorted(nums.begin(),nums.end())){
          return 0;
}
else{
     
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
           if(c==-1){
            c=nums[i];
           }
           else{
            c=c&nums[i];
           }
            }
        }
       
        return c;
}
        
    }
};