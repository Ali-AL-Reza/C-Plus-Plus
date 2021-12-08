#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int t;
         cin>>t;
         while(t--){
                  int n;
                   double x;
                  cin>>n>>x;
                  ll maxx=0,minn=0;
                  for(int i=0;i<n;i++){
                            double r;
                           cin>>r;
                           maxx=maxx+ceil(double(r/x));
                           //cout<<maxx<<endl;
                           minn=minn+r;
                  }
                  cout<<minn/x<<" "<<maxx<<endl;
         }


}
