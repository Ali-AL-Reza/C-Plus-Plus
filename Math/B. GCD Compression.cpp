#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(iint i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
#define endl '\n'
#define inf 1000000000
#define p 1000000007
using namespace std;
int main()
{
         int t;
         cin>>t;
         while(t--)
         {
                vector<pair<int,int> >even,odd;
                int n;
                cin>>n;
                for(int i=1;i<=2*n;i++)
                {
                         int x;
                         cin>>x;
                         if(x%2)odd.push_back(make_pair(n,i));
                         else even.push_back(make_pair(n,i));
                }
                int oddsize=odd.size();
                int evensize=even.size();
                if((oddsize/2)!=0 && (evensize)/2!=0)
                {
                         int index=0;
                         for(int i=0;i<oddsize/2;i++,index=index+2)
                         {
                                  cout<<odd[index].second<<" "<<odd[index+1].second<<endl;
                         }
                         index=0;
                         for(int i=0;i<n-1-(oddsize/2);i++,index=index+2)
                         {
                                  cout<<even[index].second<<" "<<even[index+1].second<<endl;
                         }
                }
                else if((oddsize)/2==0)
                {
                         int index=0;
                         for(int i=0;i<n-1;i++,index=index+2)
                         {
                                  cout<<even[index].second<<" "<<even[index+1].second<<endl;
                         }
                }
                else
                {
                         int index=0;
                         for(int i=0;i<n-1;i++,index=index+2)
                         {
                                  cout<<odd[index].second<<" "<<odd[index+1].second<<endl;
                         }
                }
                cout<<endl;

         }
}

