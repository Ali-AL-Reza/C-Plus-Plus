#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(iint i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
#define endl '\n'
#define inf 1000000000
using namespace std;
void res(int n)
{
         if(n==0)return;
         res(n-1);
         cout<<n<<endl;
}
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
                  int n;
                  cin>>n;
                  res(n);
         }
}
