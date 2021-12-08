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

bool IsPower2(int n)
{
         if (n<=0)return false;
         if((n & (n-1))==0)return true;
         else return false;
}
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
                  int n;
                  cin>>n;
                  bool ans= IsPower2(n);
                  ///cout<<ans<<endl;
                  if(ans)cout<<"it is power of two"<<endl;
                  else cout<<"it is not power of two"<<endl;


         }
}

