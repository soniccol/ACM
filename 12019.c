#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>

int getday(int month){
    month=month-1;
    if(month==1){
       return 31;
    }
    else if(month==2)
    {
	return 59;
    }
    else if(month==3)
    {
	return 90;
    }
    else if(month==4)
    {
	return 120;
    }
    else if(month==5)
    {
	return 151;
    }
    else if(month==6)
    {
	return 181;
    }
    else if(month==7)
    {
	return 212;
    }
    else if(month==8)
    {
	return 243;
    }
    else if(month==9)
    {
	return 273;
    }
    else if(month==10)
    {
	return 304;
    }
    else if(month==11)
    {
	return 334;
    }
    return 0;
}

void getDate(int day){

     if(day%7==0){
	printf("Friday\n");
     }else if(day%7==1){
	printf("Saturday\n");
     }else if(day%7==2){
	printf("Sunday\n");
     }else if(day%7==3){
 	printf("Monday\n");    
     }else if(day%7==4){
	printf("Tuesday\n");
     }else if(day%7==5){
	printf("Wednesday\n");
     }else if(day%7==6){
	printf("Thursday\n");
     }


}

int main()
{

     #ifndef ONLINE_JUDGE
         freopen("12019.in", "r",stdin);
         freopen("12019.out","w",stdout);
     #endif
         int data=0;
         int i=0;
	 int input1=0,input2=0;
         scanf("%d",&data);
         for(i=0;i<data;i++){
	   scanf("%d %d",&input1,&input2);
           input2+=getday(input1); 
           getDate(input2);
	 }

     return 0;
}
