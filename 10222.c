#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>
int main()
{
     #ifndef ONLINE_JUDGE
         freopen("10222.in", "r",stdin);
         freopen("10222.out","w",stdout);
     #endif
	 char input;
         while(scanf("%c",&input)!=EOF){
	   if(input=='e') printf("%c",'q');
	   else if(input=='2') printf("%c",'`');
	   else if(input=='3') printf("%c",'1');
	   else if(input=='4') printf("%c",'2');
	   else if(input=='5') printf("%c",'3');
	   else if(input=='6') printf("%c",'4');
	   else if(input=='7') printf("%c",'5');
	   else if(input=='8') printf("%c",'6');
	   else if(input=='9') printf("%c",'7');
	   else if(input=='0') printf("%c",'8');
	   else if(input=='-') printf("%c",'9');
	   else if(input=='=') printf("%c",'0');
	   else if(input=='r') printf("%c",'w');
	   else if(input=='t') printf("%c",'e');
	   else if(input=='y') printf("%c",'r');
	   else if(input=='u') printf("%c",'t');
	   else if(input=='i') printf("%c",'y');
	   else if(input=='o') printf("%c",'u');
	   else if(input=='p') printf("%c",'i');
	   else if(input=='[') printf("%c",'o');
	   else if(input==']') printf("%c",'p');
	   else if(input=='\\') printf("%c",'[');
	   else if(input=='d') printf("%c",'a');
	   else if(input=='f') printf("%c",'s');
	   else if(input=='g') printf("%c",'d');
	   else if(input=='h') printf("%c",'f');
	   else if(input=='j') printf("%c",'g');
	   else if(input=='k') printf("%c",'h');
	   else if(input=='l') printf("%c",'j');
	   else if(input==';') printf("%c",'k');
	   else if(input=='\'') printf("%c",'l');
	   else if(input=='c') printf("%c",'z');
	   else if(input=='v') printf("%c",'x');
	   else if(input=='b') printf("%c",'c');
	   else if(input=='n') printf("%c",'v');
	   else if(input=='m') printf("%c",'b');
	   else if(input==',') printf("%c",'n');
	   else if(input=='.') printf("%c",'m');
	   else if(input=='/') printf("%c",',');
	   else if(input=='\n') printf("%s","\n");
	   else if(input==' ') printf("%s"," ");

 	 }
     return 0;
}
