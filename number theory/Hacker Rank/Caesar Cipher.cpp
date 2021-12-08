#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define N 100001
#define endl '\n'
#define inf 1000000000
#define mod 1000000007
#define pb push_back
#define str string
using namespace std;
vector<int>ar[N];
bool vis[N];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int kx[]={-2,-1,1,2,2,1,-1,-2};
int ky[]={1,2,2,1,-1,-2,-2,-1};
int main()
{
         int n;
         cin>>n;
         str S;
         cin>>S;
         int k;
         cin>>k;
         int C;
         k=k%26;
         for(int i=0;i<S.size();i++)
         {
             C=S[i];
             if(C >='a' && C <= 'z' )
             {
                 C=C+k;
                 if(C > 'z')
                 {
                     C=96+(C%122);
                 }
             }
             else if(C>='A' && C<= 'Z' )
             {
                 C=C+k;
                 if(C > 'Z')
                 {
                     C=64+(C%90);
                 }
             }
             cout<<(char)C;
         }

}
