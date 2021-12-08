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
             string ans="";
             vector<int>v;
             int pre=(int)s[0];
             for(int i=1;i<s.size();i++)
             {
                 int cur=(int)s[i];
                 int dif=abs(pre-cur);
                 ans=ans+to_string(dif);
                 pre=cur;
             }
             reverse(s.begin(),s.end());
             pre=(int)s[0];
             string ans2="";
             for(int i=1;i<s.size();i++)
             {
                 int cur=(int)s[i];
                 int dif=abs(pre-cur);
                 ans2=ans2+to_string(dif);
                 pre=cur;
             }
             ///cout<<ans<<" "<<ans2<<endl;
             if(ans==ans2)cout<<"Funny"<<endl;
             else cout<<"Not Funny"<<endl;


         }
}
