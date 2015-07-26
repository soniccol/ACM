#include <stdio.h>
#include <math.h>
#define min(a, b)  (a > b ? b : a)

int main()
{
     #ifndef ONLINE_JUDGE
        freopen("12468.in", "r",stdin);
        freopen("12468.out","w",stdout);
     #endif
        int data=0;
        int i=0;
	int input1=0,input2=0;
        while(scanf("%d %d",&input1,&input2)!=EOF){
	     if(input1==-1&&input2==-1) break;
	     if(input1>input2){
		int temp=input1;
		input1=input2;
		input2=temp;
	     }
		printf("%d\n",min(100+input1-input2,input2-input1));
 	}
     return 0;
}
