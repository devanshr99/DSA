class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int countf=0;
        int countt=0;
        int counttt=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5) countf++;
            else if(bills[i]==10) {
                if(countf==0) return false;
                countt++;
                countf--;
            }
            else {
                if(countf>0&&countt>0){
                   countt--;
                countf--;
                }
                else if(countf>=3){
                    countf-=3;
                }
                else return false;
                
        }
        }
       return true;
    }
};