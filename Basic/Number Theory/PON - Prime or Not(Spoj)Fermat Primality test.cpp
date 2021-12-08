#include<bits/stdc++.h>
#define inf 1000000000
#define REP(i,n) for(int i=1;i<=n;i++)
#define endl '\n'
typedef long long int lli;
using namespace std;

///(a*b)% mod
lli mulmod(lli a,lli b,lli mod)
{
         lli res=0;
         a=a%mod;
         while(b>0){
                  if(b%2==1)res=(res+a)%mod;
                  a=(2*a)%mod;
                  b=b/2;
         }
         return res%mod;
}

///a^n % mod
lli binpower(lli a,lli n,lli mod)
{
         lli res=1;
         while(n){
                  if(n%2==1)res=mulmod(res,a,mod);

                  n>>=1;///n=n/2;
                  a=mulmod(a,a,mod);
         }
         return res%mod;
}

bool isprime(lli n)
{
         int iteration=5;
         if(n<=5 && n!=4) return true;

         for(int i=1;i<=iteration;i++){
                  lli a=2+rand()%(n-3);
                  lli res=binpower(a,n-1,n);
                  if(res!=1)return false;
         }
         return true;

}

int main()
{
         lli t,n;
         cin>>t;
         while(t--){
                  cin>>n;
                  if(isprime(n))cout<<"YES"<<endl;
                  else cout<<"NO"<<endl;
         }


}
