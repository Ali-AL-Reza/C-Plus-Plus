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
         lli maxx=-inf;
         lli maxy=-inf;
         lli minx=inf;
         lli miny=inf;
         vector<pair<lli , lli> >v;
          double ans=0;

         while(t--)
         {
             lli x,y;
             cin>>x>>y;
             if(x==0)
             {
                 if(abs(y)>maxy)
                 {
                     v.push_back(make_pair(x,y));
                     maxy=abs(y);
                 }
                 if(abs(y)<miny)
                 {
                     v.push_back(make_pair(x,y));
                     miny=abs(y);
                 }
             }
             else
             {
                 if(abs(x)>maxx)
                 {
                     v.push_back(make_pair(x,y));
                     maxx=abs(x);
                 }
                 if(abs(x)<minx)
                 {
                     v.push_back(make_pair(x,y));
                     minx=abs(x);
                 }

             }
             for(int i=0;i<v.size();i++)
             {
                     lli x1=v[i].first;
                     lli y1=v[i].second;
                 for(int j=i+1;j<v.size();j++)
                 {
                     lli x2=v[j].first;
                     lli y2=v[j].second;
                     double d=(double)sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
                     ans=max(ans,d);

                 }
             }
         }
         cout<<ans<<endl;
}
