#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main()
{
         int t;
         cin>>t;
         for(int test=1;test<=t;test++){
                  double r;
                  cin>>r;
                  double squre,circle;
                  squre=pow(2*r,2);
                  circle=pow(r,2)*pi;
                  cout<<"Case "<<test<<": "<<setprecision(10)<<squre-circle<<endl;
         }
}
