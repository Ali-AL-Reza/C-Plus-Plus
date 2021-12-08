#include<bits/stdc++.h>
#define mod 1000000007
#define REP(i ,n) for(int i=1;i<=n;i++);
#define lli long long int
using namespace std;
int main()
{
         char ar[]={'A','B','C','D','E','F','G','H','I','J'};
         int t,n;
         cin>>t;
         while(t--){
                  cin>>n;
                  int total=1<<n;
                  for(int mask=0;mask<total;mask++){
                           for(int i=0;i<n;i++){
                                    int f=1<<i;
                                    if((mask & f)!=0)cout<<ar[i]<<" ";
                           }
                           cout<<endl;
                  }
         }
}
