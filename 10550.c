#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>
int main()
{
     #ifndef ONLINE_JUDGE
        freopen("10550.in", "r",stdin);
        freopen("10550.out","w",stdout);
     #endif
        int data=0;
        int current=0;
	int origin=0,p1=0,p2=0,p3=0;
        int result=0;
        while(scanf("%d %d %d %d",&origin,&p1,&p2,&p3)!=EOF){
	     result=0;
	     if(origin==0&&p1==0&&p2==0&&p3==0) break;
	     
	     result+=80;

             if(p1>origin) result+=(origin+40-p1);
	     else result+=(origin-p1);
	     
	     if(p2>p1) result+=(p2-p1);
	     else result+=(p2+40-p1);

             result+=40; 

	     if(p3>p2) result+=(p2+40-p3);
	     else result+=(p2-p3);


	     printf("%d\n",result*9);
 	}
     return 0;
}
