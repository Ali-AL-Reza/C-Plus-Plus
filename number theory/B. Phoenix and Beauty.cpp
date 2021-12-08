#include<bits/stdc++.h>
using namespace std;
int main()
{
       int t;
       cin>>t;
       while(t--){
         int n,k;
         cin>>n>>k;
         set<int>s;
         for(int i=0;i<n;i++){
                  int x;
                  cin>>x;
                  s.insert(x);
         }
         if(s.size()>k){
                  cout<<"-1"<<endl;
                  continue;
         }
         cout<<n*k<<endl;
         for(int i=0;i<n;i++){
                  for(int j:s){
                           ///Range-based for loop in C++
                           cout<<j<<" ";
                  }
                  for(int l=0;l<k-s.size();l++){
                           cout<<1<<" ";
                  }
         }
         cout<<endl;

       }
}
