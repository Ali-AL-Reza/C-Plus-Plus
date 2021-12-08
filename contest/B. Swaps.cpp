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
         int t;
         cin>>t;
         while(t--)
         {
             int n;
             cin>>n;
             vector<int>odd(n),even(n);
             for(int i=0;i<n;i++)
             {
                 cin>>odd[i];
             }
             for(int i=0;i<n;i++)
             {
                 cin>>even[i];
             }
             int lo=even[0];
             int up=odd[0];
             int x,y;
             for(int i=0;i<n;i++)
             {
                 if(lo>odd[i])
                 {
                     x=i;
                     break;
                 }
             }
             for(int i=0;i<n;i++)
             {
                 if(up<even[i])
                 {
                     y=i;
                     break;
                 }
             }
             cout<<min(x,y)<<endl;
         }
}
