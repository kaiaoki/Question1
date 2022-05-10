#include"nCm.h"

double nCm(double n,double m)
{

    double k=1,A=1,B=1,C=1,D=1;
   
   for(k=1;k<=n;k+=1)
   {
       A=A*k;
   }
   
   for(k=1;k<=n-m;k+=1)
   {
       B=B*k;
   }
   
   for(k=1;k<=m;k+=1)
   {
       C=C*k;
   }
   
   D=A/(B*C);
   
   return D;
}