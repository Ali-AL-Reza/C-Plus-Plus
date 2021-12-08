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
         int n;
         cin>>n;
         string S;
         cin>>S;
         vector<string>V;
         int ans=0;
         bool flag=false;
         for(int i=0;i<26;i++)
         {
             char x='a'+i;
             for(int j=0;j<26;j++)
             {
                 char y='a'+j;
                 if(i==j)continue;
                 string S2;
                 string S3=S;
                 for(int k=0;k<n;k++)
                 {
                     if(S3[k]==x || S3[k]==y){

                            S2.push_back(S3[k]);
                     }
                 }
                /// cout<<S2<<endl;
                 for(int k=0;k<S2.size()-1;k++)
                 {
                     if(S2[k]==S2[k+1])
                     {
                         flag=false;
                         break;
                     }
                     else flag=true;
                 }
                 if(flag==true){
                        ///ans=max(ans,S2.size());
                        if(ans<S2.size())ans=S2.size();

                 }


             }
         }
         cout<<ans<<endl;
}
