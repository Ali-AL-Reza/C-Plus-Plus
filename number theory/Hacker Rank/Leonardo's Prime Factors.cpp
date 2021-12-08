#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int q;
    cin>>q;
    int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    while(q--)
    {
        lli n;
        cin>>n;
        lli ans=1, cnt=0;
        for(int i=0;i<15;i++)
        {
            ans=ans*prime[i];
            if(ans<=n)cnt++;
            else break;
        }
        cout<<cnt<<endl;
    }
}
