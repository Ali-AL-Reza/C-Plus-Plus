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
         int t;
         cin>>t;
         while(t--)
         {
                  lli n,k;
                  cin>>n>>k;
                  k=k-1;
                  if(n%2==0)cout<<(k%n)+1<<endl;
                  else
                  {
                           int mid=n/2;
                           int step=k+k/mid;
                           cout<<(step%n)+1<<endl;
                  }

         }
}

