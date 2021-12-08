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
         int n,a,b;
         cin>>n>>a>>b;
         vector<int>v(n);
         for(int i=0;i<n;i++)
         {
                  cin>>v[i];
         }
         sort(v.begin(),v.end());
         reverse(v.begin(),v.end());
         double sum1=0,sum2=0;
         for(int i=0;i<min(a,b);i++)
         {
                  sum1=sum1+v[i];
         }
         sum1=sum1/min(a,b);
         for(int i=min(a,b);i<max(a,b)+min(a,b);i++)
         {
                  sum2=sum2+v[i];
         }
         sum2=sum2/max(a,b);
         cout<<setprecision(20)<<sum1+sum2<<endl;
}

