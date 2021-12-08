#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(iint i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
#define endl '\n'
#define inf 1000000000
#define p 1000000007
using namespace std;
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
                  int n;
                  cin>>n;
                  int cnt=0;
                  for(int i=0;i<n;i++)
                  {
                           int x;
                           cin>>x;
                           if(x==1 || x==3)cnt++;
                  }
                  cout<<cnt<<endl;

         }
}
