#include<stdio.h>
#include"pai1overksq.h"

void main(void)
{
   /*Π 1/k^2 を計算する。Ａは計算結果*/
   int n;
   double A; 
  
   n=5;
   
   A=pai1oversq(n);
    
   printf("A=%lf\n",A);
   
}