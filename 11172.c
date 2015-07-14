#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>
int main()
{

     #ifndef ONLINE_JUDGE
         freopen("11172.in", "r",stdin);
         freopen("11172.out","w",stdout);
     #endif
         int data=0;
         int i=0;
	 long long int input1=0,input2=0;
         scanf("%d",&data);
         for(i;i<data;i++){
           scanf("%lld %lld",&input1,&input2);
           if(input1>input2){
		printf(">\n");
           }else if(input1<input2){
		printf("<\n");
           }else{
		printf("=\n");
           }
         }

     return 0;
}
