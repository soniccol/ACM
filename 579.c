#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>
int main()
{
     #ifndef ONLINE_JUDGE
        freopen("579.in", "r",stdin);
        freopen("579.out","w",stdout);
     #endif
        double result=0;
	double input1=0,input2=0;
        while(scanf("%lf:%lf",&input1,&input2)!=EOF){
	     if(input1==0&&input2==0) break;
	     result=fabs((30*input1)+(input2/2)-(6*input2));
	     if(result>180){
		result=360-result;
	     }
	     printf("%.3lf\n",result);
 	}
     return 0;
}
