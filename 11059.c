#include <stdio.h>
int main()
{
     #ifndef ONLINE_JUDGE
        freopen("11059.in", "r",stdin);
        freopen("11059.out","w",stdout);
     #endif
	int inputs[19];
        int data=0;
        int i=0,j=0;
	int input1=0,input2=0;
	long long int result=0;
	long long int product=1;
	int temp=0;
	
	int dataCase=1;
        while(scanf("%d",&data)!=EOF){
	     result=0;
	     for(i=0;i<data;i++){
	     	scanf("%d",&inputs[i]);
	     }

	     for(i=0;i<data;i++){
		product=1;
		for(j=i;j<data;j++){
			product*=inputs[j];
	        	if(product>result) result=product;
		}
	     }

	     printf("Case #%d: The maximum product is %lld.\n\n",dataCase,result);
	     dataCase++;

 	}
     return 0;
}
