#include"factorial.h"

int factorial(int n)
{
    int B=1;   

 for(int k=1;k<=n;k+=1)
   {
       B=B*k;
   }
   
   return B;
   
}   
   