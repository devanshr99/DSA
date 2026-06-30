class Solution {
public:
        string kthLargestNumber(vector<string>& nums, int k) { 
        sort(nums.begin(),nums.end(),[](string a,string b){
            if(a.size()!=b.size()){
                if(a.size()<b.size()){
                    return true;
                }
                else{
                    return false;
                }
                
            }
            if(a<b){
                return true;
            }
            return false;
           }
        
        );
              int i=nums.size()-k;
              return nums[i];
           
    }
    
};