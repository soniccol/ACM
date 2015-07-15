#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>
int f91(int n){

    if(n==0){
	return n;
    }else if(n<=100){
	return f91(f91(n+11));
    }else if(n>=101){
	return n-10;
    }

}
int main()
{

     #ifndef ONLINE_JUDGE
         freopen("10696.in", "r",stdin);
         freopen("10696.out","w",stdout);
     #endif
         int n=0;
         while(scanf("%d",&n)!=EOF){
              if(n!=0)
   	        printf("f91(%d) = %d\n",n,f91(n));
	      else
		break;
 	 }

     return 0;
}
