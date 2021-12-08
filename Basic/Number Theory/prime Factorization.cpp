#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void primeFact(ll n){

          for(int i=2;i*i<=n;i++){
                  if(n%i==0){
                           int cnt=0;
                           while(n%i==0){
                                    n=n/i;
                                    cnt++;
                           }
                           cout<<i<<"^"<<cnt<<"*"<<" ";
                  }
          }
          if(n>1){
                           cout<<n<<"^"<<1<<"*";
                  }


}

int main()
{
         ll n;
         cin>>n;
         primeFact(n);
}
