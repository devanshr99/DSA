class Solution {
public:
    int minimumPushes(string word) {
        int count=0;
        for(int i=0;i<word.size();i++){
            count++;
        }
        if(count<=8){
            return count;
        }
       else if(count>8&&count<=16){
        return 8+(2*(count-8));
       }
       else if(count>16&&count<=24){
        return 8+16+(3*(count-16));
       }
       else{
        return 8+16+24+((count-24)*4);
       }
        
    }
};