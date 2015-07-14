#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>
#define PI 2*acos(0.0)
int main()
{

     #ifndef ONLINE_JUDGE
         freopen("10678.in", "r",stdin);
         freopen("10678.out","w",stdout);
     #endif
         int i=0,data=0,D=0,L=0;
         double a=0,b=0;
	 scanf("%d",&data);
         for(i=0;i<data;i++){
		scanf("%d %d",&D,&L);
		a=L/2.0;
                b=sqrt((L/2.0)*(L/2.0)-(D/2.0)*(D/2.0));
                printf("%.3lf\n",PI*a*b);
         }

     


     return 0;
}
