#include<bits/stdc++.h>
#define p 1000000007
#define REP(i,n) for(int i=1;i<=n;i++)
#define N 1000001
typedef long long int ll;
using namespace std;
int F[N];

int power(int a, int n)
{
         int res=1;
         while(n){
                  if(n%2){
                           res=(res*1LL*a)%p;
                           n--;
                  }

                  n=n/2;
                  a=(a*1LL*a)%p;
         }
         return res;
}

int C(int n,int k)
{
         if(k>n)return 0;

         int res=F[n];
         res=res*1LL*power(F[k],p-2)%p;

         res=res*1LL*power(F[n-k],p-2)%p;

         return res;
}

int main()
{
         F[0]=F[1]=1;
         for(int i=2;i<=1000000;i++){
                  F[i]=(F[i-1]*1LL*i)%p;
         }
         int q;
         cin>>q;
         while(q--){
                  int n,k;
                  cin>>n>>k;
                  cout<<C(n,k)<<endl;
         }
}
