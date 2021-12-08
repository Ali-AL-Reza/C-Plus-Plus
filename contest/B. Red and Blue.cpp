#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
       int t;
       cin>>t;
       vector<int>v1(n),v2(m),v3(n+m+1);
       while(t--){
         int n,m;
         cin>>n;
         for(int i=0;i<n;i++){
                  cin>>v1[i];
         }
         for(int i=0;i<m;i++){
                  cin>>v2[i];
         }
         int minn=min(n,m);
         v3[0]=0;
         int p=0,q=0;
         for(int i=1;i<=2*minn;i++){
                  if(i%2==1)v3[i]=v1[q++];
                  else v3[i]=v2[q++];
         }
          int maxx=max(n,m);
          for(int i=0;i<maxx;)

       }

}

