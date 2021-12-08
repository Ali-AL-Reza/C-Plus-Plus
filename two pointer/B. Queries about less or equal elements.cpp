#include<bits/stdc++.h>
typedef long long ll;
#define sz 100000
#define inf 2e9
using namespace std;
int main()
{
         int n,m;
         cin>>n>>m;
         vector<ll>v1(n),v2(m);
         for(int i=0;i<n;i++)cin>>v1[i];
         sort(v1.begin(),v1.end());
         for(int i=0;i<m;i++){
                  ll x;
                  cin>>x;
                  cout<<upper_bound(v1.begin(),v1.end(),x)-v1.begin()<<" ";
         }
         cout<<endl;


}
