#include<stdio.h>
int main()
{
	 int ip1;
	 int ip2;
	 int big;
	 printf("enter input 1:");
	 scanf("%d",& ip1);
	 printf("enter input 2:");
	 scanf("%d",& ip2);
	 if (ip1>ip2)
	  big=ip1;
	  else
	  big=ip2;
	 printf("big:%d",big);
	 return 0; 
	
}
