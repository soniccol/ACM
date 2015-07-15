#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>
int main()
{

     #ifndef ONLINE_JUDGE
         freopen("11689.in", "r",stdin);
         freopen("11689.out","w",stdout);
     #endif

         int i=0;
	 int bottles=0,empty_bottles=0,ratio=0;
         int total_bottles=0;
         int remain_bottles=0;
         int soda=0;
         int input=0;
	 scanf("%d",&input);
         for(i=0;i<input;i++){
	    scanf("%d",&bottles);
	    scanf("%d",&empty_bottles);
            scanf("%d",&ratio);
            total_bottles=bottles+empty_bottles;
            soda=0;
            while((total_bottles/ratio)!=0){
		soda+=(total_bottles/ratio);
                remain_bottles=(total_bottles%ratio);
                total_bottles=(total_bottles/ratio)+remain_bottles;
            }
            printf("%d\n",soda);

         }
         
	     
 	 

     return 0;
}
