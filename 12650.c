#include <stdio.h>
#include <malloc.h>
int main(){
    #ifndef ONLINE_JUDGE
     freopen("12650.in", "r",stdin);
     freopen("12650.out","w",stdout);
    #endif 

    int n=0,R=0, retuner=0;
    int i=0,j=0;
    int *re=NULL;
    int *origin=NULL;
    while(scanf("%d %d",&n,&R)!= EOF)
    { 
      if(n==R){
	 for(i=0;i<R;i++){
	  scanf("%d",&retuner);	
         }
	printf("*\n");
      }else{
	re=malloc(sizeof(int)*R);
 	origin=malloc(sizeof(int)*n);
       for(i=0;i<n;i++){
	*(origin+i)=i+1;
       }
       for(i=0;i<R;i++){
	scanf("%d",(re+i));	
       }
	for(i=0;i<n;i++){
	 for(j=0;j<R;j++){
		if(*(origin+i)==*(re+j)){
		 *(origin+i)=0;
		}		 	
	 }
	}
	for(i=0;i<n;i++){
	  if(*(origin+i)!=0){
	    printf("%d ",*(origin+i));
	  }
          if((i+1)==n){
	   printf("\n");
	  }
	}
	free(re);	
	free(origin);	
      }                                  
    }
    return 0;
}
