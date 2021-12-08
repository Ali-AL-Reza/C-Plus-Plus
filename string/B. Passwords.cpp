#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
#define endl '\n'
#define inf 1000000000
#define p 1000000007
using namespace std;
bool cmp( string &A, string &B)
{
         return A.size()<B.size();
}
int main()
{
         int n,t;
         cin>>n>>t;
         vector<string>v(n);
         for(int i=0;i<n;i++)
         {
                  cin>>v[i];
         }
         sort(v.begin(),v.end(),cmp);
         string s;
         cin>>s;
        /// REP(i,v.size())cout<<v[i]<<endl;
         int l=0,h=0;
         for(int i=0;i<n;i++)
         {
                  if(s.size()==v[i].size() && l==0)l=i+1;
                  if((s.size()<v[i].size() && h==0))
                  {
                           h=i;
                  }
                  if(i==n-1 && h==0)h=n;
                  if(l && h)break;
         }
         //cout<<l<<" "<<h<<endl;
         cout<<((l-1)/t)*5+l<<" "<<((h-1)/t)*5+h<<endl;
}

