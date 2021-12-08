#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define N 100001
#define endl '\n'
#define inf 1000000000
#define mod 1000000007
#define pb push_back
#define Pi acos(-1)
using namespace std;
vector<int>ar[N];
bool vis[N];
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,1,-1,1};
int kx[]={-2,-1,1,2,2,1,-1,-2};
int ky[]={1,2,2,1,-1,-2,-2,-1};
int main()
{
    double r;
    while(cin>>r) {
        double z = r * r * (1 - Pi / 6.0 - sqrt(3.0) / 4);
        double y = r * r * (1 - Pi / 4.0 ) - 2 * z;
        double x = r * r  * (Pi / 2.0 - 1) - 2 * y;

        printf("%.3lf %.3lf %.3lf\n", x, 4.0 * y, 4.0 * z);
    }

}
