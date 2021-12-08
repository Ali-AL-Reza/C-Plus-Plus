#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        int t;
        cin>>t;
        while(t--){
                  int x,y;
                  cin>>x>>y;
                  int u=0,d=0,r=0,l=0;
                  if(x<=0)l=abs(x);
                  else r=abs(x);
                  if(y<=0)d=abs(y);
                  else u=y;
                  string s;
                  cin>>s;
                  int L=0,R=0,D=0,U=0;
                  for(int i=0;i<s.size();i++){
                           if(s[i]=='L')L++;
                           else if(s[i]=='D')D++;
                           else if(s[i]=='R')R++;
                           else U++;

                  }
                  if(U>=u && D>=d && R>=r && L>=l)cout<<"YES"<<endl;
                  else cout<<"NO"<<endl;


        }

}
