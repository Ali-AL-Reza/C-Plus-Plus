#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int t;
         cin>>t;
         while(t--){
                  ll A, B,n;
                  cin>>A>>B>>n;
                  vector<ll>a(n+1),b(n+1);
                  for(int i=1;i<=n;i++){
                           cin>>a[i];
                  }
                  for(int i=1;i<=n;i++){
                           cin>>b[i];
                  }
                  for(int i=1;i<=n;i++){
                           int x=ceil((double)b[i]/A);
                          /// cout<<x<< " ";
                           int lose=x*a[i];
                           B=B-lose;
                          /// cout<<B<<"  " << i<<"  "<<n<<endl;
                           if(B<0 && i==n && x==1){
                                    B=1;
                                    break;
                           }

                           if(B<0)break;
                  }
                  if(B>0)cout<<"YES"<<endl;
                  else cout<<"NO"<<endl;
         }
}
