#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
lli dp[N],inv[N];
using namespace std;
lli power(lli a,lli n)
{
         lli result=1;
         while(n)
         {
                  if(n & 1)result=(result*a)%mod;

                  n>>=1;
                  a=(a*a)%mod;
         }

         return result;
}
void init(string input_string)
{
         lli p=31;
         lli p_power=1;
         dp[0]=(input_string[0]-'a'+1);
         inv[0]=1;
         for(int i=1;i<input_string.size();i++)
         {
                  char ch=input_string[i];
                  p_power=(p_power*p)%mod;
                  inv[i]=power(p_power,mod-2);

                  dp[i]=(dp[i-1]+(ch-'a'+1)*p_power)%mod;

         }
}

lli substringhash(int l,int r)
{
         lli result=dp[r];
         if(l>0)result=result-dp[l-1];

         result=(result*inv[l])%mod;

         return result;
}
int main()
{
         string input_string;
         int total_call,l,r;
         cin>>input_string;
         init(input_string);
         cin>>total_call;
         REP(i,total_call)
         {
                  cin>>l>>r;
                  cout<<substringhash(l,r)<<endl;
         }

}

















