#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>
int main()
{

     #ifndef ONLINE_JUDGE
         freopen("11984.in", "r",stdin);
         freopen("11984.out","w",stdout);
     #endif
         int data=0;
         int i=0;
	 double cel=0,fer=0;
	 double result=0;
	 scanf("%d",&data);
	 for(i=0;i<data;i++){
	    scanf("%lf %lf",&cel,&fer);
	    double temp_cel=((fer)*5)/9;
	    printf("Case %d: %.2lf\n",(i+1),(temp_cel+cel));

	 }

     return 0;
}
