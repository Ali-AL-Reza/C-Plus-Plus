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
         lli n;

         cin>>n;
         vector<lli>V(n);
         lli sum=0;
         for(int i=0;i<n;i++)
         {
             cin>>V[i];
             sum=sum+V[i];

         }
         sort(V.begin(),V.end());
         ///reverse(V.begin(),V.end());

         lli m;
         cin>>m;
         for(int i=0;i<m;i++)
         {
             lli x,y;
             cin>>x>>y;
             lli index;
             for(int i=0;i<n;i++)
             {
                 if(x<=V[i])
                 {
                     index=i;
                     break;
                 }
                 if(x>V[n-1])index=n-1;
             }
             if(V[index]>=x && sum-V[index]>=y)cout<<0<<endl;
             else
             {
                 if(V[index]>=m)
                 {
                     lli p=V[index];
                     lli q=V[index-1];
                     lli coin1=p-m+sum-p;
                     if()

                 }

             }


         }
}
