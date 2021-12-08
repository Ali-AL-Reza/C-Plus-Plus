#include<bits/stdc++.h>
#define mod 1000000007
#define REP(i,n) for(int i=1;i<=n;i++)
#define lli long long int
#define endl '\n'
using namespace std;
lli ar[3];
lli I[3][3],T[3][3];

void mul(lli A[3][3],lli B[3][3],int dim)
{

         int res[dim+1][dim+1];
         REP(i,dim)REP(j,dim){
               res[i][j]=0;
               REP(k,dim){
                      lli x=(A[i][k]*B[k][j]%mod);
                      res[i][j]=(res[i][j]+x)% mod;
               }
         }
         REP(i,dim)REP(j,dim)A[i][j]=res[i][j];
}


lli getFib(int n)
{
         if(n<=2)return ar[n];
         I[1][1]=I[2][2]=1;
         I[1][2]=I[2][1]=0;
         ///magic matrix
         T[1][1]=0;
         T[1][2]=T[2][1]=T[2][2]=1;
         n=n-1;///n-1 porjonto majic matrix nirnoi kori
         while(n){
                  if(n%2){
                           mul(I,T,2),n--;
                  }
                  else mul(T,T,2),n=n/2;

         }
         lli Fn=(ar[1]*I[1][1]+ar[2]*I[2][1])%mod;
         return Fn;
}
int main()
{
         int t;
         cin>>t;
         ar[1]=1;
         ar[2]=2;
         while(t--){
                  int n;
                  cin>>n;
                  cout<<getFib(n)<<endl;
         }
}

