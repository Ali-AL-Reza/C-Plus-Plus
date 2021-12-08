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
         int ans=0;
         if(v[0]==0)ans=1;
         for(int i=1;i<n;i++){
                  if(v[i]==0)ans++;
                  else if(v[i]==1 && v[i-1]==1){
                           ans++;
                           v[i]=0;
                  }
                  else if(v[i]==2 && v[i-1]==2){
                           ans++;
                           v[i]=0;
                  }
                  else{
                           if(v[i-1]==1)v[i]=2;
                           else if(v[i-1]==2)v[i]=1;
                  }
         }
         cout<<ans<<endl;
}
