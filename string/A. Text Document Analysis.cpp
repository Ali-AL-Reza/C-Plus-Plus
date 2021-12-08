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
bool cmp( string &A, string &B)
{
         return A.size()<B.size();
}
int main()
{
         int n;
         cin>>n;
         bool inflag=false;

         int outside=0,inside=0,outsidec=0;
         int outunderscore=1;
         vector<string>vin,vout;
         string s;
         vector<char>v;
         for(int i=0;i<n;i++)
         {
                  char c;
                  cin>>c;
                  if((c=='('))
                  {
                           v.push_back('_');
                           v.push_back(c);
                           v.push_back('_');
                  }
                  else if(c==')')
                  {
                           v.push_back('_');
                           v.push_back(c);
                           v.push_back('_');
                  }
                  else v.push_back(c);
         }
         for(int i=0;i<v.size();i++)cout<<v[i];

}

