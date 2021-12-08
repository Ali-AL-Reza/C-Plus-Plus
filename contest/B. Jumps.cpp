#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int s = 0;
		int i = 1;
		while (s < n)
		{
		    s+=i++;
		}
		if  (s-n != 1)
		cout << i - 1 << endl;
		else
		cout << i << endl;
	}
}
