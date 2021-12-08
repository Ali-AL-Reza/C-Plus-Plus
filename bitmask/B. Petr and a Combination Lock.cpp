#include<bits/stdc++.h>
using namespace std;

int n,a[17],ok;

void ans(int i, int sum)
{
    if(i == n) {
        if(sum % 360 == 0) ok=1;
        return;
    }

    cout<<i+1<<" "<<sum-a[i]<<endl;
    ans(i+1, sum-a[i]);
    cout<<i+1<<" "<<sum-a[i]<<endl;

    ///cout<<i+1<<" ----"<<sum+a[i]<<endl;
    ans(i+1, sum+a[i]);
    ///cout<<i+1<<" ----"<<sum+a[i]<<endl;
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    ans(0,0);
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
