#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>
int main()
{

     #ifndef ONLINE_JUDGE
         freopen("10071.in", "r",stdin);
         freopen("10071.out","w",stdout);
     #endif
         int data=0;
         int i=0;
	  int input1=0,input2=0;
         while(scanf("%d %d",&input1,&input2)!=EOF){
	      printf("%d\n",input1*input2*2);
 	 }

     return 0;
}
