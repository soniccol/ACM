#include <stdio.h>
#include <stdlib.h>
int main()
{

     #ifndef ONLINE_JUDGE
         freopen("591.in", "r",stdin);
         freopen("591.out","w",stdout);
     #endif

         int *data=NULL;
	 int temp=0,move=0;
         int i=0;
	 int n=0,h=0;
	 int numbCases=1;
         while(scanf("%d",&n)==1){
	      if(n==0)
		break;
	      
		h=0;
		temp=0;
		data=malloc(sizeof(int)*n);
		for(i=0;i<n;i++){
		  scanf("%d",&temp);
		  *(data+i)=temp;
		  h+=temp;
		}
		h/=n;
		move=0;
		for(i=0;i<n;i++){
		  if((*(data+i)>h)){
		    move+=(*(data+i)-h);
		  }
		}
                printf("Set #%d\n",numbCases++);
		printf("The mininum number of moves is %d.\n\n",move);
	      
	      free(data);
	      
 	 }

     return 0;
}
