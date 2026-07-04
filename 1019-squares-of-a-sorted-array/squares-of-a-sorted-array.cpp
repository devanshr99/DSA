class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
          vector<int>a;
         int i=0;
         int j=0;
        int b;
        while(i<nums.size()){
          a.push_back(nums[i]*nums[j]);
          i++;
          j++;
        }
        sort(a.begin(),a.end());
    

    return a;
    }
    
};