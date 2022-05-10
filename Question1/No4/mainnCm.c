#include<stdio.h>
#include"nCm.h"

int main()
{
   /*nCm を計算する。最終的に、Ａ=n!,B=(n-m)!,C=m!となり、Dが計算結果*/
   double n,m; 
  
   
   n=7;
   m=3;
   
   //m>nのときのエラー表示
   if(m>n)
   {
       printf("error\n");
       
       return 0;
   }
   
   printf("%lf\n",nCm(n,m));
   
  
   return 0;
}