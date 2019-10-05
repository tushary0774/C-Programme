#include<stdio.h>
main()  //------------------------------------------------------------ task 8
{
	int a=0,b=0;
	int i=0;
	printf("Enter the number \n");
	
	scanf("%d",&a);
printf("-------------------------------------------------------------\n");

for(i=0;i<=10;i++)
{
b=a*i;
 printf("%d * %d= %d\n",a,i,b);
}
return 0;
}
