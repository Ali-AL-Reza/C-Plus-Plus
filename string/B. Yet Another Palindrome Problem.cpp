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
                  vector<int>v(n);
                  for(int i=0;i<n;i++)cin>>v[i];

                  bool ans=false;
                  for(int i=0;i<n-1;i++)
                  {
                           for(int j=n-1;j>i+1;j--)
                           {
                                    if(v[i]==v[j])
                                    {
                                             ans=true;
                                             break;
                                    }
                           }
                           if(ans==true)break;
                  }
                  if(ans)cout<<"YES"<<endl;
                  else cout<<"NO"<<endl;
         }
}
