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
    lli n,m;
    cin>>n>>m;
    lli sum=0;
    for(lli i=0;i<m;i++)
    {
        lli a,b,c;
        cin>>a>>b>>c;
        sum=sum+(b-a+1)*c;
    }
    cout<<sum/n<<endl;
}