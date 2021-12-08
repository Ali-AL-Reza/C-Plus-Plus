#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         ll n,k;
         cin>>n>>k;
         ll sum1=0,sum2=0;
         vector<ll>v1(n+1),v2(n+1);
         for(int i=1;i<=n;i++){
                  cin>>v1[i];
         }
         for(int i=1;i<=n;i++){
                  cin>>v2[i];
                  if(v2[i]==1)sum1+=v1[i];
         }
         ll maxn=-1;
         for(int i=1;i<=n;i++){
                  if(v2[i]==0)sum2+=v1[i];
                  if(i>k && v2[i-k]==0)sum2-=v1[i-k];
                  maxn=max(sum2,maxn);
         }
         cout<<sum1+maxn<<endl;
}

