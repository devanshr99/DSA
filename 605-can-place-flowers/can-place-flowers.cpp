class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // int t=flowerbed.size();
        // int count1=0;
        // int count0=0;
        // for(int i=0;i<t;i++){
        // if(flowerbed[i]==1){
        //     count1++;
        // }
        // else{
        //     count0++;
        // }
        // }
        // int x=t/2;
        // int y=t-x;
        // if((y-count1)==n){
        //     return true;
        // }
        // return false;
         int t=flowerbed.size();
        int count=0;
        int i=0;
        while(i<t){
            if(flowerbed[i]==0){
                if((i==0||flowerbed[i-1]==0)&&(i==t-1||flowerbed[i+1]==0)){
                    flowerbed[i]=1;
                    count++;
                    i=i+2;
                }
                else{
                   i++;
                }
            }
            else{
                i++;
            }
        }
        if(count>=n){
            return true;
        }
        else{
            return false;
        }

        
    }
};