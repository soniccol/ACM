#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <float.h>
#include <string.h>
int main()
{
     #ifndef ONLINE_JUDGE
        freopen("494.in", "r",stdin);
        freopen("494.out","w",stdout);
     #endif
        char data[1000];
        int i=0;
	int wordCount=0;
        while(gets(data)){
	     wordCount=0;
	     for(i=0;i<strlen(data)-1;i++){
		if(isalpha(data[i])&&!isalpha(data[i+1])) wordCount++;	
	     }
	     printf("%d\n",wordCount);
 	}
     return 0;
}
