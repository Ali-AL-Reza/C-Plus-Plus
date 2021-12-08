#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(iint i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
#define endl '\n'
#define inf 1000000000
using namespace std;
string st;
lli pi[N];
void calpi()
{
         for(int i=1;i<st.size();i++)
         {
                  int j=pi[i-1];
                  while(j>0 && st[i]!=st[j])j=pi[j-1];

                  if(st[i]==st[j])j++;

                  pi[i]=j;
         }
}
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
               int k;
               cin>>st>>k;
               calpi();
                int n=st.size();
                cout<<n+(k-1)*(n-pi[n-1])<<endl;
         }
}

