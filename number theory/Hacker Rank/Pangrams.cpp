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
        string S;
        getline(cin,S);
        bool al[26];
        memset(al,false,26);
        string S2;
        for(int i=0;i<S.size();i++)
        {
            char x=tolower(S[i]);
            ///cout<<x-'a'<<endl;
            if(al[x-'a']==false)
            {
                al[x-'a']=true;
                S2.push_back(x);
            }
        }
        bool ans=true;
        for(int i=0;i<26;i++)
        {
            if(al[i]==false)
            {
                ans=false;
                break;
            }

        }
//        sort(S2.begin(),S2.end());
//        cout<<S2<<endl;
        if(ans)cout<<"pangram"<<endl;
        else cout<<"not pangram"<<endl;
}
