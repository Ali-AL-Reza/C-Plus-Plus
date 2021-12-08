/*
Solution: Firstly, reverse N's Binary number, then add an extra 0 at the end of the reverse number.
As before reverse,In the main binary this will be appened in front of that number , so actual number
will be unchanged. Now use STL next_permutation() once.

STL next_permutation() transforms the range of elements [first, last] into the lexicographically
next greater permutation of the elements.Because i need the immediate next greater value after N ,
thats why i need to call next_permutation() only ones.

After find next lexicographical permutation, convert that binary into decimal which is my desired result.
Reason of adding an extra Zero:

Consider N = 8, if you transform this to binary it will be 1000, if you apply next_permutation, the number
you will get will be 1 (0001).But, If you have the binary number in this way: 01000, you will get (10000)
which is 16 (and also the desired answer)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
         int test;
         cin>>test;
         vector<int>vec;
         for(int t=1;t<=test;t++){
                  int n;
                  cin>>n;
                  vec.clear();
                  while(n>=2){
                           int mod=n%2;
                           vec.push_back(mod);
                           n/=2;
                  }
                  vec.push_back(n);
                  vec.push_back(0);///add an extra zero
                  reverse(vec.begin(),vec.end());

                  next_permutation(vec.begin(),vec.end());

                  int decimal=0;
                  int power=0;
                  int sz=vec.size();
                  for(int i=sz-1;i>=0;i--){
                           if(vec[i]!=0){
                                    decimal=decimal+(int)pow(2,power);
                           }
                           power++;
                  }
                 cout<<"Case "<<t<<": "<<decimal<<endl;
         }
         return 0;
}
