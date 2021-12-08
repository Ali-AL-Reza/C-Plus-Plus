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
int base_conv(int n, int base)
{
    int result = 0, temp, i = 0;

    while(n>0)
    {
        temp = (n%10)*(pow(base, i));
        n/=10;
        i++;
        result=result+temp;
    }
    return result;
}

int base_finder(int n)
{
    int tmp, i, mx = n%10;

    while(n>0)
    {
        if(n%10>mx)
            mx = n%10;

        n/=10;
    }
    return mx+1;
}

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int x, y, i;

        cin>>x>>y;

        int base_x = base_finder(x);

        int base_y = base_finder(y);

        int x10 = base_conv(x, base_x);

        int y10 = base_conv(y, base_y);

        int result = x10+y10;

        cout<<result<<endl;

    }
}

