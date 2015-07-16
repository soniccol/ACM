#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>
int main()
{

     #ifndef ONLINE_JUDGE
         freopen("11936.in", "r",stdin);
         freopen("11936.out","w",stdout);
     #endif
         int data=0;
         int i=0;
	 int e1=0,e2=0,e3=0;
         int judge=1;
	 scanf("%d",&data);
         for(i=0;i<data;i++){
	    scanf("%d",&e1);
	    scanf("%d",&e2);
	    scanf("%d",&e3);
	    if(!((e1+e2)>e3)){
		judge=0;
	    }
 	    if(!((e2+e3)>e1)){
		judge=0;
	    }
	    if(!((e1+e3)>e2)){
		judge=0;
	    }    
	    
	    if(judge==0)
		printf("Wrong!!\n");
            else
                printf("OK\n");


            judge=1;
	 }

     return 0;
}
