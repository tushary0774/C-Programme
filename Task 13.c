#include<stdio.h>
main()
{
	int a,b;
	float ansa[50];
	float ansb[50];
	printf("Enter the number of elements you would like to compare: \n");
	scanf("%d",&a);

	for(b=0;b<a;b++)
	{
		printf(" Enter number %d ",b+1);
		scanf("%f",&ansa[b]);
		ansb[b]=ansa[b];
	}
	for(b=0;b<a;b++)
	{
	if(ansa[0]<ansa[b])
	ansa[0]=ansa[b];
	if(ansb[0]>ansb[b])
	ansb[0]=ansb[b];
}
printf("\n--------------------------------------\n");
printf("The largest number is %.2f \n \n",ansa[0]);
printf("The smallest number is %.2f",ansb[0]);

getch();

/*lowest
	for(b=0;b<a;b++)
	{
		printf(" Enter number %d ",b+1);
		scanf("%f",&ansb[b]);
	}
	for(b=0;b<a;b++)
	{
	if(ansb[0]>ansb[b])
	ansb[0]=ansb[b];
	
}

printf("The smallest number is %.2f",ansb[0]);*/
}
