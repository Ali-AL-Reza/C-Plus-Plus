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
                  int b=0,c=0;
                  vector<int>v(n);
                  for(int i=0;i<n;i++){
                           cin>>v[i];
                  }
                  sort(v.begin(),v.end());
                  reverse(v.begin(),v.end());
                  for(int i=0;i<n;i++){
                           if(i==0){
                                    b=v[0];
                                    continue;
                           }
                           if(b<c)b=b+v[i];
                           else if(b>c)c=c+v[i];
                           else if(b==c)b=b+v[i];
                  }
                  if(b==c)cout<<"YES"<<endl;
                  else cout<<"NO"<<endl;
         }
}
