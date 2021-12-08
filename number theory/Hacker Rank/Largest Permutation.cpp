#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define N 100001
#define endl '\n'
#define inf 1000000000
#define mod 1000000007
#define pb push_back
#define str string
using namespace std;
vector<int>ar[N];
bool vis[N];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int kx[]={-2,-1,1,2,2,1,-1,-2};
int ky[]={1,2,2,1,-1,-2,-2,-1};
int main()
{
         int n,k;
         cin>>n>>k;
         vector<lli>arr(n);
         unordered_map<int, int>h;
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
             h.insert(make_pair(arr[i],i));
         }
         if(n<=k)
         {
             sort(arr.begin(),arr.end(),greater<int>());
         }
         else
         {
             for(int j=n;j>=1;j--)
             {
                 if(k>0)
                 {
                     int initial_index=h[j];
                     int best_index=n-j;

                     if(initial_index !=best_index)
                     {
                         h[j]=best_index;///h[j] te best index (n-j) insert korlam
                         int element=arr[best_index];///ar ze element er sathe index swap korbo ta ekhane pabo
                         h[element]=initial_index;
                         swap(arr[best_index],arr[initial_index]);
                         k--;
                     }
                 }
             }
         }




         for(int i=0;i<n;i++)
         {
             cout<<arr[i]<<" ";
         }
         cout<<endl;
}
