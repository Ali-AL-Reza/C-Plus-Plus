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
             string s1,s2;
             cin>>s1;
             cin>>s2;
             lli ans=0;
             for(int i=0;i<n;)
             {
                 if(s1[i]!=s2[i])
                 {
                     ans=ans+2;
                    /// cout<<ans<<endl;
                     i++;
                 }
                 else
                 {
                     int c=0;
                     if((s1[i]=='0'&& s2[i]=='0') && (s1[i+1]=='1' && s2[i+1]=='1'))
                     {
                         ans=ans+2;
                         i=i+2;
                     }
                     else if(s1[i]=='0'&& s2[i]=='0')
                     {
                         ans=ans+1;
                         i=i+1;
                     }
                     else if((s1[i]=='1'&& s2[i]=='1') && (s1[i+1]=='0' && s2[i+1]=='0'))
                     {
                         ans=ans+2;
                         i=i+2;
                     }
                     else i++;
                 }
             }
             cout<<ans<<endl;
         }
}
