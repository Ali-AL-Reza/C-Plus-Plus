#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    long long ans=0,up,x;
    cin>>n>>d;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        up=upper_bound(ar,ar+n,ar[i]+d)-ar;
        x=up-(i+1);
        cout<<up<< " "<<x<<endl;
        if(x>=2){
            ans+=x*(x-1)/2;
        }
    }
    cout<<ans<<"\n";
}
