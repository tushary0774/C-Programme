#include<stdio.h>
main()// ----------------------------------------------- Task 6
{
	int num,a,b,c;

		printf("Enter the number you want to check as an armstrong: \n");
	scanf("%d",&num);
	c=num;
	while(num>0)
	{ 
	a=num%10;
	b=b+(a*a*a);
	num=num/10;	}
	if (c==b)
	{ printf("The number entered is an armstrong number !");
	}
	else{
		printf("The number entered is not an armstrong number.");
	}
	getch();

}
