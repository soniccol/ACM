#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>

int main()
{

     #ifndef ONLINE_JUDGE
         freopen("10491.in", "r",stdin);
         freopen("10491.out","w",stdout);
     #endif
         double NCOW=0,NCAR=0,NOPEN=0;
      
	 while(scanf("%lf %lf %lf",&NCOW,&NCAR,&NOPEN)!=EOF){
           double rate1=(NCOW/(NCOW+NCAR))*(NCAR/(NCOW+NCAR-NOPEN-1));
           double rate2=(NCAR/(NCOW+NCAR))*((NCAR-1)/(NCOW+NCAR-NOPEN-1));
	   printf("%.5lf\n",rate1+rate2);
         }
        
     


     return 0;
}
