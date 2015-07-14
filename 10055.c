#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>
int main()
{

     #ifndef ONLINE_JUDGE
         freopen("10055.in", "r",stdin);
         freopen("10055.out","w",stdout);
     #endif

	 long long int input1=0,input2=0;
	 while(scanf("%lld %lld",&input1,&input2)!=EOF){
         long long int result=(input1 > input2)? input1-input2 : input2-input1;
         printf("%lld\n",result);
     }


     return 0;
}
