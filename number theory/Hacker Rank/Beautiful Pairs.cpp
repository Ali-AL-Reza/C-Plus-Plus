#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define N 100001
#define endl '\n'
#define inf 1000000000
#define mod 1000000007
#define pb push_back
#define str string
using namespace std;
vector<int>ar[N];
bool vis[N];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int kx[]={-2,-1,1,2,2,1,-1,-2};
int ky[]={1,2,2,1,-1,-2,-2,-1};
int main()
{
         int ar1[10000]={0};
         int ar2[10000]={0};
         int n;
         cin>>n;
         for(int i=0;i<n;i++)
         {
             int x;
             cin>>x;
             ar1[x]++;
         }
         for(int i=0;i<n;i++)
         {
             int x;
             cin>>x;
             ar2[x]++;
         }
         int ans=0;
//         cout<<ar1[3]<<" "<<ar2[3]<<endl;
//         cout<<ar1[5]<<" "<<ar2[5]<<endl;
//         cout<<ar1[7]<<" "<<ar2[7]<<endl;
//         cout<<ar1[11]<<" "<<ar2[11]<<endl;
//         cout<<ar1[10]<<" "<<ar2[10]<<endl;

         for(int i=0;i<=10000;i++)
         {
             if(ar1[i]>0 && ar2[i]>0)
             {
                 ans=ans+min(ar1[i],ar2[i]);
             }
         }
         if(ans<n)cout<<ans+1<<endl;
         else cout<<ans-1<<endl;
}
