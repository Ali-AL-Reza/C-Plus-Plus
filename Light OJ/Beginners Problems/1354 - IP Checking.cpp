#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
long long int bitodi(ll n)
{
         ll sum=0;
         int p=0;
         while(n>0){
                int r=n%10;
                sum=sum+(r*pow(2,p));
                n=n/10;
                p++;
         }
         return sum;
}
int main()
{
         int test;
         scanf("%d",&test);
         for(int t=1;t<=test;t++){
                  long long int a1,b1,c1,d1;
                  char ch;
                  long long int a2,b2,c2,d2;
                  cin>>a1>>ch>>b1>>ch>>c1>>ch>>d1;
                  cin>>a2>>ch>>b2>>ch>>c2>>ch>>d2;
                  if((a1==bitodi(a2)) && (b1==bitodi(b2)) && (c1== bitodi(c2)) && (d1==bitodi(d2)) ){
                           cout<<"Case "<<t<<": "<<"Yes"<<endl;

                  }
                  else{
                           cout<<"Case "<<t<<": "<<"No"<<endl;
                  }

         }

         return 0;
}
