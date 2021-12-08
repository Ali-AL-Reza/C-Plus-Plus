#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> >vec;

bool cmp(pair<int,int>a,pair<int,int>b)
{
         if(a.first==b.first)return a.second > b.second;
         return a.first<b.first;
}

int num_of_divisor(int n)
{
         int cnt=0;
         for(int i=1;i<=sqrt(n);i++){
                  if(n%i==0){
                           if(i==n/i)cnt++;
                           else cnt=cnt+2;
                  }
         }
         return cnt;
}

void gen()
{
  for(int i=1;i<1001;i++){
         int divisor=num_of_divisor(i);
         vec.push_back(make_pair(divisor,i));
  }
  sort(vec.begin(),vec.end(),cmp);

}

int main()
{

         gen();
         int test;
         scanf("%d",&test);
         for(int t=1;t<=test;t++){
                  int n;
                  scanf("%d",&n);
                  printf("Case %d: %d\n",t,vec[n-1].second);
         }
         return 0;
}
