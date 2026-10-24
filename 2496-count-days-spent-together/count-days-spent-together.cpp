class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> ans = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int n,m,o,p,q,r,s,t;

         o=((arriveAlice[0]-'0')*10)+(arriveAlice[1]-'0');
         p=((arriveAlice[3]-'0')*10)+(arriveAlice[4]-'0');

         q=((leaveAlice[0]-'0')*10)+(leaveAlice[1]-'0');
         r=((leaveAlice[3]-'0')*10)+(leaveAlice[4]-'0');

         s=((arriveBob[0]-'0')*10)+(arriveBob[1]-'0');
         t=((arriveBob[3]-'0')*10)+(arriveBob[4]-'0');
         
         n=((leaveBob[0]-'0')*10)+(leaveBob[1]-'0');
         m=((leaveBob[3]-'0')*10)+(leaveBob[4]-'0');
         int a=0, b=0, c=0, d=0;
         
        for(int i=0;i<o-1;i++) a+=ans[i];
            a+=p; 
        
        for(int i=0;i<q-1;i++) b+=ans[i];
            b+=r;

        for(int i=0;i<s-1;i++) c+=ans[i];
            c+=t;

        for(int i=0;i<n-1;i++) d+=ans[i];
            d+=m;
         
         int maxii=max(a,c);
         int mini=min(b,d);
         if(maxii>mini) return 0;

         return mini-maxii+1;
        
    }
};