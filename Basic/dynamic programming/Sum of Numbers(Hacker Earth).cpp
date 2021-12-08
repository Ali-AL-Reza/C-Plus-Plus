#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define mod 1000000007
#define endl '\n'
using namespace std;
int main()
{
         int t;
         cin>>t;
         int ar[15];
         while(t--){
                  int n;
                  cin>>n;
                  REP(i,15) ar[i]=0;

                  REP(i,n)cin>>ar[i];

                  int p;
                  cin>>p;

                  bool ans=false;
                  REP(mask,1<<n){
                       int sum=0;
                       REP(i,n)
                       {
                                int f=1<<i;
                                if((mask & f)!=0)sum=sum+ar[i];
                       }
                       if(sum==p){
                           ans=true;
                           break;
                       }
                  }
                  if(ans)cout<<"YES"<<endl;
                  else cout<<"NO"<<endl;
         }
}
