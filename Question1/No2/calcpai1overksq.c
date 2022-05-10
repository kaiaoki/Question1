#include"pai1overksq.h"

double pai1oversq(int n)
{
    double B=1.0;
    
     for(double k=1;k<=n;k+=1)
   {
       B=B*(1/(k*k));
   }
   
   return B;
}


