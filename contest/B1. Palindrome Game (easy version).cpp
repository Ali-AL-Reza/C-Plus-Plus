#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	    int n;
		string s;
		cin>>n>>s;
		int cnt=0;
		for(int i=0;i<n;i++){
			if(s[i]=='0')
			cnt++;
		}
		if(cnt!=1&&cnt%2){
			cout<<"ALICE\n";
		}
		else
		cout<<"BOB\n";
	}
}
