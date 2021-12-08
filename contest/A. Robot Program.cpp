#include<bits/stdc++.h>
using namespace std;
int main()
{
       int test;
       cin>>test;
       for(int t=0;t<test;t++){
         int x,y;
         cin>>x>>y;
         x=abs(x);
         y=abs(y);
         //cout<<x<<y;
         if(x==y)cout<<x+y<<endl;
         else{
                  int maxx=max(x,y);
                  cout<<maxx+maxx-1<<endl;
         }
       }
}
