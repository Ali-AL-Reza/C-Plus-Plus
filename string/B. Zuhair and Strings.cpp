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
         int n,k;
         cin>>n>>k;
         string s;
         cin>>s;
         vector<char>v;
         bool ans=true;
         int match=1;
         for(int i=0;i<n;i++)
         {
                  if(s[i]==s[i+1])match++;
                  else
                  {
                           int r=match;
                           match=1;
                           if(r>=k)
                           {
                                    int q=r/k;
                                    cout<<q<<endl;
                                    while(q--)v.push_back(s[i]);
                           }
                  }
         }
         for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
         sort(v.begin(),v.end());
         int count=1,ansc=0;
         if(v.size()==0)cout<<0<<endl;
         else{
         for(int i=0;i<v.size()-1;i++)
         {
                  if(v[i]==v[i+1])count++;
                  else
                  {
                           ansc=max(ansc,count);
                           count=0;
                  }
         }
         cout<<ansc<<endl;
         }
}

