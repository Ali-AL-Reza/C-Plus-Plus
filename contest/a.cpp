#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll fun(ll n, ll cnt){
     while(n%2==0){
         cnt=2*cnt;
         n=n/2;
     }

     return cnt;
}


int main()
{
         int t;
         cin>>t;
         while(t--){
                  ll w,h,n;
                  cin>>w>>h>>n;
                  if(n==1)cout<<"YES"<<endl;
                  else{
                           int count1=0;
                           int count2=0;
                           ll w1= fun(w,1);
                           ll h1= fun(h,1);
                           if(w1*h1>=n)cout<<"YES"<<endl;
                           else cout<<"NO"<<endl;
                  }
         }
}
