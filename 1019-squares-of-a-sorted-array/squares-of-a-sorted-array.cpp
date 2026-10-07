class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {  
        int n=nums.size();
        vector<int>ans;
        vector<int>a;
        vector<int>b;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                a.push_back(nums[i]);
            }
            else{
                b.push_back(nums[i]);
            }
        }
        int i=a.size()-1;
        int j=0;
        while(i>=0&&j<b.size()){
            if(abs(a[i])>b[j]){
               ans.push_back(b[j]*b[j]);
               j++;
            }
            else{
                ans.push_back(a[i]*a[i]);
                i--;
            }
        }
        while(i>=0){
        
                ans.push_back(a[i]*a[i]);
                i--;
            }
            while(j<b.size()){
            
                ans.push_back(b[j]*b[j]);
                j++;
        
        }
        return ans;
        }
       
    
    
    
};