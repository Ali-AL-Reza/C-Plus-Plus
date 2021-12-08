/***
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;
const long long mx = 1e10+10;

long long f(long long x)
{
	long long ans=0;
	while(x)
	{
		ans+=x/5;
		x/=5;
	}
	///printf("%lld\n",ans);
	return ans;
}
int main()
{
	int n;
	long long x;
	scanf("%d",&n);
	for(int j=1;j<=n;j++){
		scanf("%lld",&x);
		long long l=1,r=mx,mid,ans=0;
		while(l<=r)
		{
			mid=(l+r)>>1;
			//printf("%lld\n",mid);
			if(f(mid)==x)
			{
				ans=mid;
				///printf("--------%lld\n",ans);
				r=mid-1;
				///printf("===l %lld\n",l);
				///printf("-->>>%lld\n",r);
			}
			else if(f(mid)>x)
				r=mid-1;
			else
			    l=mid+1;
			//printf("%d\n",mid);
		}
		if(ans)
		  printf("Case %d: %lld\n",j,ans);
		else
		  printf("Case %d: impossible\n",j);
	}
	return 0;
}
***/



















#include<bits/stdc++.h>
using namespace std;

long long check(long long x)
{
    long long n = 0;
    while(x)
    {
        n += x/5;
        x = x/5;
    }

    return n;
}

long long BS(long long x)
{
    long long left = 0, right = 10000000000, mid, ans = 0;
    while(right>=left)
    {
        mid = (left+right) >> 1;
        if(check(mid) >= x)
        {
            if(check(mid)==x)
                ans = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }

    return ans;
}

int main()
{
    int T,t;
    long long Q;
    cin>>T;
    for(t = 1; t <= T; t++)
    {
        cin>>Q;
        if(BS(Q)!=0)
            cout<<"Case "<<t<<": "<<BS(Q)<<endl;
        else
            cout<<"Case "<<t<<": impossible"<<endl;
    }

    return 0;
}
