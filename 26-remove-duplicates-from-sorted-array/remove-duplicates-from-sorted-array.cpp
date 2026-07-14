class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        
    // int k=1;
    // int i=0;
    // int j=1;
    // while(j<nums.size()){
    //     if(nums[i]==nums[j]){
    //         i++;
            
    //     }
    //     else{
    //         nums[k]=nums[j];
    //         k++;
    //         i++;
    //     }
    //     j++;
    // }
    // return k;
    if(n<=1)
    return n;

int k=1;

for(int j=1; j<n;j++) {

    if(nums[j] != nums[k-1]) {

        nums[k] = nums[j];

        k++;
    }
}
return k;
    }
    
};