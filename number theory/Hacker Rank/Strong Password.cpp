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
         int n;
         cin>>n;
         string S;
         cin>>S;
         int di=0,lo=0,up=0,sp=0;
         for(int i=0;i<n;i++)
         {
             if(isupper(S[i]))up=1;
             else if(isdigit(S[i]))di=1;
             else if(islower(S[i]))lo=1;
             else sp=1;
         }
         int miss=4-(up+di+lo+sp);
         cout<<max((6-n),miss)<<endl;
}
