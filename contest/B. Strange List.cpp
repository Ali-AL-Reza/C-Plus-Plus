#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int t;
         cin>>t;
         while(t--){
                int n,x;
                cin>>n>>x;
                vector<ll>v;
                for(int i=0;i<n;i++){
                  int a;
                  cin>>a;
                  v.push_back(a);
                }
                ll sum=0;
                for(int i=0; ;i++){
                  //cout<<v[i]<<endl;
                  if(v[i]%x==0){
                        if(i<n)sum=sum+2*v[i];
                        else sum=sum+v[i];
                       // cout<<sum<<endl;
                                  for(int j=0;j<x;j++){
                                    v.push_back(v[i]/x);
                                  }
                  }
                  else break;
                }
                cout<<sum<<endl;

         }


}

