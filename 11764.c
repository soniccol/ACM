#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>
int main()
{

     #ifndef ONLINE_JUDGE
         freopen("11764.in", "r",stdin);
         freopen("11764.out","w",stdout);
     #endif
         int data=0;
         int casedata=0;
         int i=0,j=0;
	 int input1=0,input2=0;
         int inputdata=0;
         int highjump=0,lowjump=0;
         scanf("%d",&data);
         for(i=0;i<data;i++){
	   scanf("%d",&casedata);
           int temp=0;
 	   highjump=0;
	   lowjump=0;
           for(j=0;j<casedata;j++){
		scanf("%d",&inputdata);
                if(j==0){
		   temp=inputdata;
		}else if(temp<inputdata){
		   highjump++;
		   temp=inputdata;
		}else if(temp>inputdata){
		   lowjump++;
		   temp=inputdata;
		}
	   }
           printf("Case %d: %d %d\n",(i+1),highjump,lowjump);
	 }

     return 0;
}
