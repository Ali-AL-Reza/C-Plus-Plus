#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;


bool ispowerof2 ( cpp_int num )
{
    if ( ( num & ( num - 1 ) ) == 0 )
        return 1;
    return 0;
}


int main()
{

    int t;
    cin>>t;
    while(t--){
         cpp_int num;
         cin>>num;
         bool ans=ispowerof2 ( num );
         if(bool)cout<<"NO";
         else cout<<"YES"<<endl;
    }
    return 0;
}
