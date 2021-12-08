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
                  int n,k;
                  cin>>n>>k;
                  int  ans=ceil((double)(n-2)/2);
                  if(ans< k)cout<<"-1"<<endl;
                  else
                  {
                           if(k==0)
                           {
                                    for(int i=1;i<=n;i++)cout<<i<<" ";
                                    cout<<endl;
                           }
                           else
                           {
                                    int re=n;
                           int r=1;
                           for(int i=1;i<=k*2;i++)
                           {
                                    if(i%2==1)
                                    {
                                             cout<<r<<" ";
                                             r++;
                                    }
                                    else
                                    {
                                             cout<<re<<" ";
                                             re--;
                                    }
                           }
                           for(int i=0;i<n-(2*k);i++)
                           {
                                    cout<<r++<<" ";
                           }
                           cout<<endl;
                           }
                  }
         }
}

