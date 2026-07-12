class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int rank=1;
        vector<int>temp;
        vector<int>ans;
        temp=arr;
        unordered_map<int,int>mp;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
             if (mp.find(arr[i]) == mp.end()) {
                 mp[arr[i]] = rank;
                 rank++;
    }
    
        }
    for(int i=0;i<temp.size();i++){
    ans.push_back(mp[temp[i]]);
  }
return ans;  
        
        
    }
};