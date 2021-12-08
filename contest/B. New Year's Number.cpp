#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int t;
         cin>>t;
         while(t--){
                  ll n;
                  cin>>n;
                  ll a=n%2021;
                  ll b=n%2020;
                  cout<<a<<endl;
                  cout<<a%2020<<endl;
                  if(n<2020)cout<<"NO"<<endl;
                  else{
                           if(a%2020==0|| b%2021==1|| b>b%2021)cout<<"YES"<<endl;
                           else cout<<"NO"<<endl;
                  }
         }
}
