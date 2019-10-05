#include<stdio.h>
main()//-------------------------------------------------- task5
{
	int no=0;
	int rno=0;
	printf("Enter the number you want reversed:\n");
	scanf("%d",&no);
	
	while(no !=0)
	{ rno= (rno *10)+(no%10);
	  no= no/10;
	   
	}
	printf("The number reversed is %d \n",rno);
	
}
