#include<bits/stdc++.h>
using namespace std;
int main()
{
         int a,b,c,d;
         cin>>a>>b;
         cin>>c>>d;
         int count=0;
         bool flag=false;
         for(int i=0;i<=100;i++){
                  count=b+i*a;
                  int rem=count-d;
                  if(rem%c==0){
                           flag=true;
                           break;
                  }
         }
         if(flag)cout<<count<<endl;
         else cout<<"-1"<<endl;
}
