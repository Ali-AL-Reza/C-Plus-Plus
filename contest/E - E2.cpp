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
lli finddigit(lli n)
{
    if(n<0)return 0;
    if(n==1)return 1;

    double Nofd=0;
    for(lli i=2;i<=n;i++)
    {
        Nofd=Nofd+log10(i);
    }
    return floor(Nofd)+1;
}
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
             lli n;
             cin>>n;
             cout<<finddigit(n)<<endl;

         }
}
