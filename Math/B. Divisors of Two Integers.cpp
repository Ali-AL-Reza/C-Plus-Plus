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
         int n;
         cin>>n;
         vector<int>v(n);
         int maxx=1;
         for(int i=0;i<n;i++)
         {
                  cin>>v[i];
                  maxx=max(maxx,v[i]);
         }
         sort(v.begin(),v.end());
         int ans=1;
         for(int i=n-1;i>=0;i--)
         {
                  if(maxx % v[i]!=0 || v[i]==v[i-1])
                  {
                           cout<<maxx<<" "<<v[i]<<endl;
                           break;
                  }
                 /// if(i==0)cout<<maxx<<" "<<v[n-2]<<endl;

         }
}

