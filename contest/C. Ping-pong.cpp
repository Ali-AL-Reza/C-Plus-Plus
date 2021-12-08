#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
         int t;
         cin>>t;
         while(t--){
                 ll x,y;
         cin>>x>>y;
                 if(x==y){
                  if(x%2==0){
                           cout<<x/2<<" "<<y/2<<endl;
                  }
                  else{
                           cout<<x/2<<" "<<(x/2)+1<<endl;
                  }

                 }
                 else if(x>y){
                       if(y%2==0)y=y/2;
                       else y=(y/2)+1;
                       cout<<x-y<<" "<<y<<endl;

                 }
                 else if(y>x){
                      x=x/2;
                      cout<<x<<" "<<y-x<<endl;

                 }
         }
}

