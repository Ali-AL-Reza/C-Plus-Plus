#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
#define endl '\n'
#define inf 1000000000
#define p 1000000007
using namespace std;
int main()
{
         string s1;
         cin>>s1;
         string s=s1;
         int R=0,G=0,B=0,Y=0;
         for(int i=0;i<s.size();i++)
         {
                  if(s[i]!='!')s[i%4]=s[i];
                  if(s[0]!='!' && s[1]!='!' && s[2]!='!'&& s[3]!='!')break;
         }
         for(int i=0;i<s1.size();i++)
         {
                  if(s[i%4]=='R' && s1[i]=='!')R++;
                  else if(s[i%4]=='G' && s1[i]=='!')G++;
                  else if(s[i%4]=='B' && s1[i]=='!')B++;
                  else if(s[i%4]=='Y' && s1[i]=='!')Y++;
         }
         cout<<R<<" "<<B<<" "<<Y<<" "<<G<<endl;
}

