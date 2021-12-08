#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    int maxx1=0,maxy1=0,minx1=10000000,miny1=10000000;
    int xx,yy;
    while(t--){
           int n,k;
           cin>>n>>k;
           int maxx=0;
           for(int i=0;i<n;i++){
                  int x,y;
                  cin>>x>>y;
                  if(i==0){
                           xx=x;
                           yy=y;
                           continue;
                  }
                  int maxxx=abs(xx-x)+abs((yy-y));
                  ///cout<<abs(xx-x)<<"    "<<abs(yy-y)<<endl;
                  if(maxxx>maxx){
                          maxx=maxxx;
                          xx=x;
                          yy=y;

                  }
           }
           ///cout<<maxx<<endl;
           ///cout<<maxx<<endl;
           if(maxx>k)cout<<"-1"<<endl;
           else cout<<1<<endl;

    }
}

