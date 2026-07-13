class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int i=0;
        int j=1;
        int ans=0;
        while(j<nums.size()){
            if(nums[i]==nums[j]){ //time complexity=o(nlog n)
                return nums[i]; // space complexity-o(1)
            }                  
            
                i++;
                j++;
     }
        return -1;;
    //     unordered_map<int,int> mp;

    // for (int x:nums) {
    // mp[x]++;                   //time complexity=o(n)
    // if (mp[x] > 1)             //space complexity=o(n)
    //     return x;
}
    
};