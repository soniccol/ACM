#include <stdio.h>

int cycle_length(int n)
{
     int length=1;
     while (n!=1)
     {
          if (n%2==1) n=3*n+1;
          else n=n/2;
          length++;
     }
     return length;
}
int main(){

    #ifndef ONLINE_JUDGE
    	freopen("100.in", "r",stdin);
    	freopen("100.out","w",stdout);
    #endif

    int n, m, max, on, om, tn;
    while(scanf("%d %d",&n,&m)!= EOF)
    {                                               
        on=n;
        om=m;               
        if(n>m){
         n=om;
         m=on;      
        }       
        max=0;
        tn=0;
        for(n;n<=m;n++){
          tn=cycle_length(n);            
          if(tn>max)
          max=tn;
        }
        printf("%d %d %d\n",on,om,max);
    }

    return 0;
}
