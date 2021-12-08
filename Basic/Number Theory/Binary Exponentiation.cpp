#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int power(int a ,ll n)
{
         ll res=1;
         while(n){
                  if(n%2){
                           res=res*a;
                           n--;
                  }
                  else{
                           a=a*a;
                           n=n/2;
                  }
         }
         return res;
}

int main()
{
         int a;
         ll p;
         cin>>a>>p;
         cout<<power(a,p)<<endl;
}
