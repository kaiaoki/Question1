#include<stdio.h>
#include "sigmasq.h"

int sigmasq(int n)
{
    int B=0;
   for(int k=1;k<=n;k+=1)
   {
       B=B+k*k;
   }
   
   return B;
}
