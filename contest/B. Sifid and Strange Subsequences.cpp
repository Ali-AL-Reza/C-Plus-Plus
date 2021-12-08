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
             vector<lli>v1,v2;
             int count=0;
             for(lli i=0;i<n;i++)
             {
                 lli x;
                 cin>>x;
                 if(x<=0)
                 {
                     count++;
                     v1.push_back(x);
                 }
                 else v2.push_back(x);
             }
             sort(v1.begin(),v1.end());
             reverse(v1.begin(),v1.end());
             sort(v2.begin(),v2.end());
             if(n==1)cout<<n<<endl;
             else if(count==n)cout<<count<<endl;
             else if(count==0)cout<<1<<endl;
             else if(count==1 && n>=2)cout<<2<<endl;
             else
             {
                 if(abs(v1[1]-v1[0])>=v2[0])count++;
                 cout<<count<<endl;
             }
         }
}
