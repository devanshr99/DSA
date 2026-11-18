class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n=arr1.size();
        int count=0;
       for(int i=0;i<n;i++){
        int j=0;
        while(j<arr2.size()){
            if(abs(arr1[i]-arr2[j])>d){
                 j++;
            }
            else{
                 count++;
                break;
               
            }
        }

       }
       return n-count;
        
    }
};