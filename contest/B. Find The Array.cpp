#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        int y=1;
	        while(y<=x)
	        {
	            y*=2;
	            cout<<y<<endl;
	        }
	        cout<<y/2<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
