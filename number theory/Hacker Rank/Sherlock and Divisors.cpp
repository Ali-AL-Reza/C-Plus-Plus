#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define N 100001
#define endl '\n'
#define inf 1000000000
#define mod 1000000007
#define pb push_back
using namespace std;
vector<int>ar[N];
bool vis[N];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int kx[]={-2,-1,1,2,2,1,-1,-2};
int ky[]={1,2,2,1,-1,-2,-2,-1};
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
             lli n;
             cin>>n;
             if(n%2==1)cout<<0<<endl;
             else
             {
                 lli cnt=0;
                 int i;
                 for( i=1;i*i<n;i++)
                 {
                     if(n%i==0)
                     {
                         if(i%2==0)cnt++;
                         if((n/i)%2==0)cnt++;
                     }
                 }
                 ///cout<<sqrt(n)<<endl;
                 if((i*i)==n && i%2==0)cnt++;
                 cout<<cnt<<endl;
             }
         }
}
