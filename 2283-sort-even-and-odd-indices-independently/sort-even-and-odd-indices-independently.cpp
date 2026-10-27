class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>e;
        vector<int>o;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                e.push_back(nums[i]);
            }
            else{
                o.push_back(nums[i]);
            }
        }
        sort(e.begin(),e.end());
         sort(o.begin(),o.end(),greater<int>());
         int i=0;
         int j=0;
         for(int k=0;k<nums.size();k++){
            if(k%2==0){
               ans.push_back(e[i++]);
            }
            else{
                ans.push_back(o[j++]);
            }
         }
         
         return ans;
        
    }
};