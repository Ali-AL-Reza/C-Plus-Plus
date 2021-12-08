
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
             int n;
             cin>>n;
             string s;
             cin>>s;
             int in1=-1,in2=-1;
             for(int i=0;i<n-1;i++)
             {
                 if(s[i]!=s[i+1])
                 {
                     in1=i+1;
                     in2=i+2;
                     break;
                 }
             }
             cout<<in1<<" "<<in2<<endl;

         }
}
