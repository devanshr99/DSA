class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // int i=0;
        // int j=0;
        // while(i<s.size()){
        //     if(s[i]=='#'){
        //         if(i==0){
        //             s.erase(0,1);
        //         }
        //         else{
        //             s.erase(i-1,2);
        //             i--;
        //         }
        //     }
        //     else{
        //         i++;
        //     }
        // }

        // while(j<t.size()){
        //     if(t[j]=='#'){
        //         if(j==0){
        //             t.erase(0,1);
        //         }
        //         else{
        //             t.erase(j-1,2);
        //             j--;
        //         }
        //     }
        //     else{
        //         j++;
        //     }
        // }
        // if(s==t){
        //     return true;
        // }
        // return false;
        //this approach is correct but erase()take o(n);

int i=s.size()-1;
int j=t.size()-1;
int skips=0;
int skipt=0;
while(i>=0||j>=0){
while(i>=0){
if(s[i]=='#'){
    skips++;
    i--;
}
else if(skips>0){
    skips--;
    i--;
}

else{
    break;
}
}
while(j>=0){
if(t[j]=='#'){
    skipt++;
    j--;
}
else if(skipt>0){
    skipt--;
    j--;
}

else{
    break;
}
}
if(i<0&&j>=0){
    return false;
}
if(i>=0&&j<0){
    return false;
}
if(i>=0&&j>=0){
    if(s[i]!=t[j]){
        return false;
    }
}
i--;
j--;

}
return true;
    }
};