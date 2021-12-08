#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int t;
         cin>>t;
         while(t--){
                  int n;
                  cin>>n;
                  vector<int>v(n+1);
                  for(int i=1;i<=n;i++){
                           cin>>v[i];
                  }
                  int maxx=0;
                  for(int i=1;i<=n;i++){
                           int cnt=0;
                           int c=0;
                           for(int j=i;j<=n;){
                                    c= i;
                                    //cout<<c<<endl;
                                    cnt=cnt+v[j];
                                    //cout<<cnt<<endl;
                                    j=cnt+c;
                                    //cout<<j<<endl;
                                   // cout<<cnt<<endl;;
                           }
                           //cout<<cnt<<endl;
                           maxx=max(maxx,cnt);
                           //cout<<maxx<<endl;
                  }
                  cout<<maxx<<endl;
         }
}

