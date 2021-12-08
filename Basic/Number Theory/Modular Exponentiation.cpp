#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int power(int a ,ll n,int p)
{
         ll res=1;
         while(n){
                  if(n%2){
                           res=(res*a)%p;
                           n--;
                  }
                  else{
                           a=(a*a)%p;
                           n=n/2;
                  }
         }
         return res;
}

int main()
{
         int a;
         ll n;
         int p;

         cin>>a>>n>>p;
         cout<<power(a,n,p)<<endl;
}

