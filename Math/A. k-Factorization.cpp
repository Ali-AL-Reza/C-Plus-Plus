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

int main()
{
        lli n,k;
        cin>>n>>k;
        int x=k;
        vector<int>v;
        for(int i=2;i*i<=n ;i++)
        {
                 if(n%i==0)
                 {
                          while(n%i==0 && x>1)
                          {
                                   v.push_back(i);
                                   n=n/i;
                                   x--;
                          }
                 }
        }
        if(n>1)v.push_back(n);
        if(k>v.size())cout<<-1<<endl;
        else
        {
                 for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        }
}
