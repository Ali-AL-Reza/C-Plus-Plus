#include<bits/stdc++.h>
using namespace std;
int main()
{
         int test;
         scanf("%d",&test);
         for(int t=0;t<test;t++){
                  int n,c0,c1,h;
                  //scanf("%d%d%d%d",&n,&c0,&c1,&h);
                  cin>>n>>c0>>c1>>h;
                  int count1=0,count0=0;
                  for(int i=0;i<n;i++){
                           char ch;
                           //scanf("%c",&ch);
                           cin>>ch;
                           if(ch=='0')count0++;
                           else count1++;
                  }
                  ///cout<<count0<<" "<<count1<<endl;
                  if(c0==c1)cout<<n*c0<<endl;
                  else{
                           int r1=count1*c1+count0*c0;
                           int r2=n*c1+count0*h;
                           int r3=n*c0+count1*h;
                           ///cout<<r1<< " "<<r2<<" "<<r3<<endl;
                           cout<<min(r1,min(r2,r3))<<endl;
                  }
         }
}
