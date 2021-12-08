#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int test;
         cin>>test;
         for(int t=0;t<test;t++){
                  ll n,k;
                  cin>>n>>k;
                  vector<ll>v(n*k);
                  ll x1;
                  if(n%2==0) x1=n/2;
                  else  x1=(n/2)+1;
                  ll sum=0;
                  ll x=n/2;
                  for(ll i=0;i<n*k;i++ ){
                  ll num;
                  cin>>v[i];
                  }
                  ///reverse(v.begin(),v.end());
                  ///cout<<v.size()<<endl;
                   ll limit=v.size();
                   ll count=0;
                   cout<<"L"<<limit<<endl;
                  for(int i=v.size()-x;i>=0;i=i-x1){
                                  ///  cout<<v[i]<<endl;
                                  //cout<<i<<endl;
                                  ///cout<<v[i]<<endl;
                           sum=sum+v[i];
                   count++;
                   if(count==k)break;
                  }
                  cout<<sum<<endl;
         }
}
