#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define N 100001
#define endl '\n'
#define inf 1000000000
#define mod 1000000007
#define pb push_back
using namespace std;
vector<int>ar[N];
bool vis[N];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int kx[]={-2,-1,1,2,2,1,-1,-2};
int ky[]={1,2,2,1,-1,-2,-2,-1};
int main()
{

         string S;
         cin>>S;
         vector<char>V;
         for(int i=0;i<S.size();i++)
         {
             if(V.size()==0 or S[i]!=V.back())V.push_back(S[i]);
             else V.pop_back();
         }
         if(V.size()==0)cout<<"Empty String"<<endl;
         else
         {
             for(int i=0;i<V.size();i++)cout<<V[i];
         }
         cout<<endl;
}
