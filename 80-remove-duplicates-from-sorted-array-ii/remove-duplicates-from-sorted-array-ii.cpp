class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.size()<=2)
        return nums.size();
        
        int i=0;
        int j=1;
        int k=1;
        int count=1;
        for(j=1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                count++;
                if(count<=2){
                    nums[k]=nums[j];
                    k++;
                    i++;
                }
            }
            else{
                nums[k]=nums[j];
                i++;
                k++;
                count=1;
            }
        }
        
        return k;
    }
};