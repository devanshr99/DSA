class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum=0;
        int mx= *max_element(nums.begin(),nums.end());
        // for (int i = 0; i < nums.size(); i++){
        //         if(nums[i]==mx){
        //             nums[i]=nums[i]+1;
        //             break;
        //         }
        //     }
        while(k--){
            
            sum=sum+mx;
            mx++;
            
        }
        return sum;
    }
};