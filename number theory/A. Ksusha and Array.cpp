#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         ll n;
         cin>>n;
         vector<ll>v(n);
         for(int i=0;i<n;i++){
                  cin>>v[i];
         }
         sort(v.begin(),v.end());
         bool flag=true;
         int index;
         for(int i=0;i<n;i++){
                           index=i;
                  for(int j=0;j<n;j++){
                           if(v[j]%v[i]!=0){
                                    flag=false;
                                    break;
                           }
                  }
                  if(flag==true)break;
         }
         if(true)cout<<v[index]<<endl;
         else cout<<"-1"<<endl;
}
