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
         lli a,b;
         cin>>a>>b;
         lli count=0;
         vector<int>v;
         for(int i=1;i<=5;i++)
         {
                  int ans=i%5;
                  int x=5-i%5;

                  while(x<=b)
                  {
                           count++;
                           x=x+5;
                  }
                 /// cout<<count<<" ";
                 v.push_back(count);
                 count=0;

         }
         for(int i=1;i<=a;i++)
         {
                  ///cout<<v[((i-1)%5)]<<" ";
                  count=count+v[(i-1)%5];
         }
         cout<<count<<endl;
}

