#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>
int main()
{

     #ifndef ONLINE_JUDGE
         freopen("10783.in", "r",stdin);
         freopen("10783.out","w",stdout);
     #endif
         int test_case=1;
         int data=0;
         int i=0;
         int j=0;
	 int input1=0,input2=0;
         int result=0;
         scanf("%d",&data);
         for(i=0;i<data;i++){
	  scanf("%d",&input1);
	  scanf("%d",&input2);
	  result=0;
	  for(j=input1;j<=input2;j++){
	   if(j%2!=0){
	    result+=j;
	   }
          }
          printf("Case %d: %d\n",test_case,result);
	  test_case++;
	 }
	 
     return 0;
}
