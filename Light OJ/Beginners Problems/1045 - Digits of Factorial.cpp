/** fact of digit x ->10 base        x
                                 log 10  +1;
                                  x
     fact of digit x, b->base log  b   +1
  we didn't know b base log so the formula is:

  fact of n , b-->base :
       y        z         y
   log x   =log  x . log  z  ;

                 y
        y    log x
    log z  =----------;
                 z
             log x


             than x=10 ;
             we can solve the problem;

             first we restore 10^6 digit of factorial;
             by the formula(log a.log b.log c.....=log a+log b+log c....)
             then apply the previous formula.

  **/
  #include<bits/stdc++.h>
  #define max 1000100
  using namespace std;

  double digit[max];

  void fact_digit(){
    double x=0;
    for(int i=1;i<=max;i++){

           x=x+log(i);
          digit[i]=x;
    }

  }


  int main()
  {
           fact_digit();
           int test;
           ///cin>>test;
           scanf("%d",&test);
           for(int t=1;t<=test;t++){
                  int n,b;
                  ///cin>>n>>b;
                  scanf("%d %d",&n,&b);
                  int result=digit[n]/log(b);
                  result=floor(result)+1;
                  ///cout<<"Case "<<t<<": "<<result;
                  printf("Case %d: %d\n",t,result);
           }
           return 0;
  }
