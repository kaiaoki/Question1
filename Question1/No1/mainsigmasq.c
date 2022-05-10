#include<stdio.h>
#include"sigmasq.h"

void main(void)
{
   /*Σk^2を計算する。Bは計算結果*/
   int k,n,B;
   
   n=5;
   
   sigmasq(n);
   
   printf("A=%d\n",sigmasq(n));
   
}
