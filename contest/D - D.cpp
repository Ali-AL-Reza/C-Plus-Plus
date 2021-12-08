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
int main(){
    lli a, b, c, ans1, ans2;
    while(~scanf("%I64d%I64d%I64d", &a, &b, &c)){
        if(a + b < c) puts("Impossible");
        else{
            if(a >= c){
                ans1 = c;
                ans2 = 0;
            }
        else{
            if(b >= c){
                    ans1 = 0;
                    ans2 = c;
            }
            else{
                    ans1 = a;
                    ans2 = c - a;
                }
            }
            printf("%I64d %I64d\n", ans1, ans2);
        }
    }
    return 0;
}
