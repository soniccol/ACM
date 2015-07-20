#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>
int main()
{

     #ifndef ONLINE_JUDGE
         freopen("11942.in", "r",stdin);
         freopen("11942.out","w",stdout);
     #endif
         int data=0;
         int i=0,j=0;
	 int a=0,b=0;
	 int input1=0,input2=0;
         int isOrdered=1;
	 int largeOrder=0;
         int smallOrder=0;
         int arr[10];
	 int orderTemp=0;
	 scanf("%d",&data);
	 printf("Lumberjacks:\n");
	 for(i=0;i<data;i++){
	    for(j=0;j<10;j++){
		int temp=0;
                scanf("%d",&temp);
                arr[j]=temp; 
	    }
	    smallOrder=0;
	    largeOrder=0;
	    for(j=0;j<9;j++){
		if(arr[j]-arr[j+1]<0){
			smallOrder=1;  
		}else{
			largeOrder=1;
		}
	    }	
	    if(largeOrder==1&&smallOrder==1){
	    	printf("Unordered\n");
	    }else{
		printf("Ordered\n");
	    }
            
	 }
	 
     return 0;
}
