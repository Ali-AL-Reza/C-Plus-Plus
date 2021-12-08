#include<bits/stdc++.h>
using namespace std;
int main()
{
         int t;
         cin>>t;
         for(int i=1;i<=t;i++){
                  int count=0,n;
                  cin>>n;
                  for(int j=0;j<n;j++){
                           int x;
                           cin>>x;
                           if(x>0)count=count+x;
                  }
                  cout<<"Case "<<i<<": "<<count<<endl;
         }
}
