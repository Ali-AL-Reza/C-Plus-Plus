#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define mod (int)1e9+7
#define N 1000001
using namespace std;
lli dp[N],inv[N];
void init(string input_string)
{
         lli p = 31;
	lli p_power = 1;
	inv[0] = 1;
	dp[0] = (input_string[0] - 'a' + 1);


	for(int i=1;i<input_string.size();i++)
	{
		char ch = input_string[i];

		p_power = (p_power * p) % mod;
		///inv[i] = power(p_power , mod - 2);

		dp[i] = (dp[i-1] + (ch - 'a' + 1)*p_power) % mod;
	}
}
/**void initpower(lli n)
{
         lli p=31;
         inv[0]=1;
         for(lli i=1;i<n;i++)inv[i]=(inv[i-1]*p)%mod;
}**/
lli gethash(string key)
{
         lli value=0;
         lli p=31;
         lli p_power=1;
         for(int i=0;i<key.size();i++)
         {
                  value=(value+(key[i]-'a'+1)*p_power)%mod;
                  inv[i]=p_power;
                  p_power=(p_power*p)%mod;
         }
         return value;
}
lli substringhash(int l,int  r)
{
         lli result=dp[r];
         if(l>0)result=(result-dp[l-1]+mod)%mod;
         return result;
}

int main()
{
         int n;
         string haystack,needle;
         while(cin>>n)
         {
                  cin>>needle;
                  cin>>haystack;
                  init(haystack);
                 /// initpower(haystack.size());
                  lli needlehash=gethash(needle);

                  for(int l=0,r=needle.size()-1;r<haystack.size();l++,r++)
                  {
                           needlehash=(needlehash*inv[l])%mod;
                           if(needlehash==substringhash(l,r))cout<<l<<endl;
                  }
                  cout<<endl;


         }
}
