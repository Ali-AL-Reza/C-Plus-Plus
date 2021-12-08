#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        int t;
        cin>>t;
        while(t--){
              int n;
              cin>>n;
              ll left=0;
              ll sumr=0;
              bool ans=true;
              for(int i=0;i<n;i++){
                  ll x;
                  cin>>x;
                  ll curr=x-i;
                  if(left+curr<0)ans=false;
                  left=left+curr;

              }
              if(ans)cout<<"YES"<<endl;
              else cout<<"NO"<<endl;

        }


}
