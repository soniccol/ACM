#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main ()
{
   double x, ret, val;

   x = 0;
   ret = acos(x) * 2; 

   
   printf("The arc cosine of %lf is %lf degrees", x, ret);
   
   return(0);
}
