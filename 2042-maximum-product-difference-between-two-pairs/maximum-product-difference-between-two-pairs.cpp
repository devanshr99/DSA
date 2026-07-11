class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans;
        ans=abs((nums[0]*nums[1])-(nums[nums.size()-1]*nums[nums.size()-2]));
        return ans;
        // IT TAKE O(nlog n) DUE TO SORTING,SO think of approach that not uses sorting
    //     int mini;
    //     int maxi;
    //     int a=INT_MIN;
    //     int b=INT_MAX;
    //     mini=*min_element(nums.begin(),nums.end());
    //     maxi=*max_element(nums.begin(),nums.end());
       
    //    for(int i=0;i<nums.size();i++){
    //     if(nums[i]<maxi){
    //          a=max(a,nums[i]);
    //     }
    //     if(nums[i]>=mini){
    //          b=min(b,nums[i]);
    //     }

    //    }
    //     return abs((a*maxi)-(mini*b));
    }
};