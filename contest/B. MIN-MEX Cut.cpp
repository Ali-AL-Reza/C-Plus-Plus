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
             string s;
             cin>>s;
             int one=0 , zero=0;
             int ans=0;
             vector<int>v;
             if(s[0]=='1')v.push_back(0);
             else v.push_back(1);

             for(int i=1;i<s.size();i++)
             {
                 if(s[i]!=s[i-1])
                 {
                     if(s[i]=='0')v.push_back(1);
                     else v.push_back(0);
                 }
                 if(s[i]=='0')zero++;
                 else one++;
             }
             if(zero==s.size())cout<<1<<endl;
             else if(one==s.size())cout<<0<<endl;
             else
             {
                 int ans=0;
                 for(int i=0;i<v.size();i++)
                 {
                     ans=ans+v[i];
                     if(ans>=2)break;
                 }
                 cout<<ans<<endl;
             }


         }
}
