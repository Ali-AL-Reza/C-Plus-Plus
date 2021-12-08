#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
#define endl '\n'
#define inf 1000000000
#define p 1000000007
using namespace std;
int main()
{
         int a,b,c;
         cin>>a>>b>>c;
         bool ans=false;
         for(int i=0;i<=10000;i++)
         {
                  int x=i;
                  for(int j=0;j<=10000;j++)
                  {
                           int y=j;
                          if(x*a+y*b==c)
                          {
                                   ans=true;
                                   break;
                          }
                          if(x*a+y*b>c)break;

                  }
                  if(ans)break;
         }
         if(ans)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;

}

