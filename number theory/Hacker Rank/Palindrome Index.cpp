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
             string s1=s;
             reverse(s1.begin(),s1.end());
             bool flag=false;
             int ans=-1;
             if(s==s1)cout<<-1<<endl;
             else
             {
                 for(int i=0;i<s.size();i++)
                 {
                     if(s[i]!=s1[i] && s[i+1]==s1[i])
                     {
                         ans=i;
                         s.erase(s.begin()+i);
                         string s2=s;
                         reverse(s2.begin(),s2.end());
                         if(s==s2)
                         {
                             flag=true;
                         }
                         else
                         {
                             flag=false;
                             ans=-1;

                         }
                         break;
                     }
                     else if(s[i]!=s1[i] && s1[i+1]==s[i])
                     {
                         ans=s.size()-i-1;
                         s1.erase(s1.begin()+i);
                         string s3=s1;
                         reverse(s3.begin(),s3.end());
                         if(s1==s3)
                         {
                             flag=true;

                         }
                         else
                         {
                             flag=false;
                             ans=-1;
                         }

                         break;
                     }
                     else
                     {
                         flag=false;
                     }
                 }
                 if(flag)cout<<ans<<endl;
                 else cout<<-1<<endl;
             }
         }
}
