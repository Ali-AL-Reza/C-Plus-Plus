#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(iint i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
#define endl '\n'
#define inf 1000000000
#define p 1000000007
using namespace std;
int main()
{
        int n;
        cin>>n;
        string st;
        cin>>st;
        string s[8]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
        int j=0;
        for(int i=0;i<8;i++)
        {
                 for( j=0;j<s[i].size();j++)
                 {
                          if(s[i].size()!=st.size() ||( s[i][j]!=st[j] && st[j]!='.'))break;
                 }
                 if(j==s[i].size()){
                           cout<<s[i]<<endl;
                           break;
                 }

        }
}

