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
 int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // your code goes here
        bool poss=false;
        long long int ans=0;
        if(s[0]=='0'){
            string ns="0";
            long long int next=1;
            while(ns.size()<s.size()){
                ns+=to_string(next);
                next++;
            }
            if(ns==s) poss=true;
        }
        else{
            for(int i=1;i<=(s.size()/2);i++){
                ans*=10;
                ans+=(s[i-1]-'0');
                long long int next=ans+1;
                string ns=s.substr(0,i);
                while(ns.size()<s.size()){
                    ns+=to_string(next);
                    next++;
                }
                if(ns==s){
                    poss=true;
                    break;
                }
            }
        }
        if(poss&&s.size()>1) cout<<"YES "<<ans<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

