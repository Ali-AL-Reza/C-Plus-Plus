#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(iint i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
#define endl '\n'
#define inf 1000000000
#define p 1000000007
using namespace std;
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
                  int n;
                  cin>>n;
                  vector<int>odd;
                  vector<int>even;
                  for(int i=0;i<n;i++)
                  {
                           int x;
                           cin>>x;
                           if(x%2==0)even.push_back(x);
                           else odd.push_back(x);
                  }
                  for(int i=0;i<odd.size();i++)cout<<odd[i]<<" ";
                  for(int i=0;i<even.size();i++)cout<<even[i]<<" ";
                  cout<<endl;
         }
}

