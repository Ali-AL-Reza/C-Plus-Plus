#include<bits/stdc++.h>
using namespace std;
int a[]={6,8,4,2};
int main()
{
         int n;
         cin>>n;
         if(n==0)cout<<"1"<<endl;
         else cout<<a[n%4]<<endl;
}
