#include<bits/stdc++.h>
using namespace std;
int main()
{
         list<int>l;
         list<int>::iterator it=l.begin();
         int n;
         cin>>n;
         for(int i=0;i<n;i++)
         {
                  int x;
                  cin>>x;
                  l.push_back(x);
         }
         l.push_front(100);
         l.sort();
         reverse(l.begin(),l.end());
         advance(it,2);///iterator point at index 2
         l.insert(it,200);
         it=find(l.begin(),l.end(),100);
         l.erase(it);
         cout<<l.size()<<endl;
         int index=1;
         for(it=l.begin();it!=l.end();it++,index++)
         {
                  cout<<index<<" "<<*it<<endl;
         }
}
