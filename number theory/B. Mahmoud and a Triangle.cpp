#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int n;
         cin>>n;
         vector<int>v(n);
         for(int i=0;i<n;i++){
                  cin>>v[i];
         }
         sort(v.begin(),v.end());
         reverse(v.begin(),v.end());
         bool ok=false;
         for(int m=0;m<n-2;m++){
                 ll y=v[m];
                  if(ok==true)break;
                  for(int i=m+1;i<n-1;i++){
                          ll x=v[i]+v[i+1];
                           if(y<x){
                                    ok=true;
                                    break;
                           }
                           else ok=false;
                  }
         }
         if(ok)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
}
