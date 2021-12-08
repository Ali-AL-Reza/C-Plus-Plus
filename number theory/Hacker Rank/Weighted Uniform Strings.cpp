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
int ky[]={1,2,2,1,-1,-2,-2,-1};\
vector<bool>V(10000000);
int main()
{
         string S;
         cin>>S;
         int in=1;
         for(int i=0;i<S.size();i++)
         {
             int x=S[i]-'a' +1;

             if(i==0)
             {
                 V[x]=true;
                 continue;
             }
             if(S[i]==S[i-1])
             {
                 in++;
             }
             else in=1;

             V[in*x]=true;
         }
         lli q;
         cin>>q;
         while(q--)
         {
             lli x;
             cin>>x;
             if(V[x]==true)cout<<"Yes"<<endl;
             else cout<<"No"<<endl;

         }
}
