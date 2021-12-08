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
       int n,q;
       cin>>n>>q;
       list<int>arr ;
       for(int i=0;i<n;i++)
       {
                int x;
                cin>>x;
                arr.push_back(x);
       }
       while(q--)
       {
                int count=1;
                int x;
                cin>>x;
                list<int>::iterator it;
                for(it =arr.begin();it !=arr.end();it++,count++)
                {
                         if(*it == x)
                         {
                                  arr.erase(it);
                                  arr.push_front(x);
                                  cout<<count<<" ";
                                  break;
                         }
                }
       }
       cout<<endl;
}

