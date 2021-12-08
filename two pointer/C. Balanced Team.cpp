#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
         int n;
         cin>>n;
         vector<int>vec(n);
         int maxx=INT_MIN;
         for(int i=0;i<n;i++){
                  cin>>vec[i];
         }

         sort(vec.begin(),vec.end());
         int count;
         for(int i=0;i<n;i++){
                  count=upper_bound(vec.begin(),vec.end(),vec[i]+5)-vec.begin();
                  maxx=max(maxx,count-i);
         }
         cout<<maxx<<endl;
}
