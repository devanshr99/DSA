// USING HASHSET
class Solution {
    public:
    int firstMissingPositive(vector<int>& nums){
        int n=nums.size();
        unordered_set<int>s;
        for(int x:nums){
            s.insert(x);
        }
        for(int target=1;target<n+1;target++){
            if(s.find(target)==s.end()){
                return target;
            }  
        }
        return n+1;
    }
};
// THIS APPROACH TIME LIMIT EXCEEDED (173/179) TEST CASE PASSED

// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         int n=nums.size();
//      for(int target=1;target<n+1;target++){
//             bool ans=false;
//                 for(int i = 0; i < nums.size(); i++) {
//                     if(nums[i] ==target) {
//                     ans=true;
//                     break;
//                     }
//                 }
//                  if(!ans)
//                     return target;
//             }
//        return n+1;  
//     }
// };

