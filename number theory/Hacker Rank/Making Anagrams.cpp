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
         string s1,s2;
         cin>>s1>>s2;
         int frq[26]={0};
         for(int i=0;i<s1.size();i++)
         {
             frq[s1[i]-'a']++;
         }
         for(int i=0;i<s2.size();i++)
         {
             frq[s2[i]-'a']--;
         }
         int ans=0;
         for(int i=0;i<26;i++)
         {
             if(frq[i]>0)ans=ans+frq[i];
             else ans=ans-frq[i];
         }
         cout<<ans<<endl;
}
