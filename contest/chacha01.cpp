#include<bits/stdc++.h>
using namespace std;
int coord(int x,int y)
{
   return x+y;
}

int main()
{
         int x=10,y=10;
         int ol= coord(x,y);
         cout<< ol<<"   "<<ol<<endl;
        ol= coord(99,ol);
        cout<<ol<< "  "<<ol<<endl;

}
