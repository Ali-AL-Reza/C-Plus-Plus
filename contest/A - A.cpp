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
         lli n;
         vector<lli>v(66);
         v[0]=v[1]=0;
         v[1]=v[2]=v[3]=1;
         for(int i=4;i<=64;i++)v[i]=v[i-1]+v[i-2]+v[i-3];
         int i=1;
         while(cin>>n)
         {
             if(n==0)break;
             cout<<"Case "<<i++<<": "<<v[n]<<endl;


         }
}
