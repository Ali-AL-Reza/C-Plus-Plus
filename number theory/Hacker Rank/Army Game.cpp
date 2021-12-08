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
         int n,m;
         cin>>n>>m;
         if(n%2==0 && m%2==0)cout<<(n*m)/4<<endl;
         else if(n%2==1 && m%2==1)cout<<((n-1)*(m-1)/4)+(n/2)+(m/2)+1<<endl;
         else if(n%2==0 && m%2==1)cout<<(n*(m-1)/4)+(n/2)<<endl;
         else if(n%2==1 && m%2==0)cout<<(m*(n-1)/4)+m/2<<endl;
}
