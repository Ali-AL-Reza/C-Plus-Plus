#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int t;
         cin>>t;
         while(t--){
                  ll n,k;
                  cin>>n>>k;
                  vector<int>v1(n+2);
                  for(int i=1;i<=n;i++){
                           cin>>v1[i];
                  }
                  v1[n+1]=0;
                  int ans=0;
                  bool flag=false;
                  for(int j=1;j<=k;j++){
                           for(int i=1;i<=n;i++){
                                    if(v1[i]<v1[i+1]){
                                             v1[i]++;
                                             if(j==k)ans=i;
                                             break;
                                    }
                                    if(i==n){
                                          flag=true;
                                          break;
                                    }
                           }
                           if(flag)break;
                  }
                  if(flag)cout<<"-1"<<endl;
                  else cout<<ans<<endl;

         }
}
