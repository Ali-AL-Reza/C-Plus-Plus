#include<bits/stdc++.h>
#define REP(i,n) for(int i=1;i<=n;i++)
#define p 1000000007
#define N 1000001
#define maxN 1000000
typedef long long int ll;
using namespace std;

int phi[N];

void init()
{
         REP(i,maxN) phi[i]=i;

         for(int i=2;i<=maxN;i++){
                  if(phi[i]==i){
                           for(int j=i;j<=maxN;j=j+i){
                                    phi[j]=phi[j]/i;
                                    phi[j]=phi[j]*(i-1);
                           }
                  }
         }
}

int main()
{
       init();
       int t;
       cin>>t;
       while(t--){
         int n;
         cin>>n;
         cout<<"ETF of n is "<<phi[n]<<endl;
       }
}
