#include<bits/stdc++.h>
#define REP(i,n) for(int i=1;i<=n;i++)
typedef long long int ll;
using namespace std;

int power(int a, int n,int m)
{
         int res=1;
         while(n){
                  if(n%2){
                           res=(res*a)%m;
                           n--;
                  }
                  else{
                           n=n/2;
                           a=(a*a)%m;
                  }
         }
         return res;
}

int main()
{
         int t,a,b,m;
         ///a^m-2= a^1 mod m
         cin>>t;
         while(t--){
                  cin>>a>>m;
                  ///a er modulo inverse is a^m-2

                  cout<<"Modulo inverse of "<<a<<" (mod "<<m<<") is "<<power(a,m-2,m)<<endl;
         }
}
