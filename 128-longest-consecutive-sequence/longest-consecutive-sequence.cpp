class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;//or useunordered_set<int> st(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        };
        int longest=0;
        
        for(int x:st){
            if(st.find(x-1)==st.end()){
                 int count=1;
                 int curr=x;
            while(st.find(curr+1)!=st.end()){
                    count++;
                    curr++;        
        }
                 longest=max(longest,count);
            }
    }
        return longest;
   }
          
};