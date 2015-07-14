#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>
void chartonumber(char *alphabet){
     int temp=(int)*alphabet;
     if(temp>=65&&temp<=67){
	*alphabet=(char)50;
     }else if(temp>=68&&temp<=70){
	*alphabet=(char)51;
     }else if(temp>=71&&temp<=73){
     	*alphabet=(char)52;
     }else if(*alphabet>=74&&*alphabet<=76){
     	*alphabet=(char)53;
     }else if(*alphabet>=77&&*alphabet<=79){
     	*alphabet=(char)54;
     }else if(*alphabet>=80&&*alphabet<=83){
     	*alphabet=(char)55;
     }else if(*alphabet>=84&&*alphabet<=86){
     	*alphabet=(char)56;
     }else if(*alphabet>=87&&*alphabet<=90){
     	*alphabet=(char)57;
     }
}
int main()
{

     #ifndef ONLINE_JUDGE
         freopen("10921.in", "r",stdin);
         freopen("10921.out","w",stdout);
     #endif

     int i=0;
     char input[31];
     while(scanf("%s",&input)!=EOF){
         i=0;
	 while(input[i]!='\0'){
        	chartonumber(&input[i]);
        	i++;
	 }
         printf("%s\n",&input);
     }

     return 0;
}
