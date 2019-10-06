#include<stdio.h>
struct book{
char title[20],author[20],genre[20];
};
void result();

main() //---------------------------------------- Task11
{
while(1)
{ int ans; 
printf("Do you want to? \n1.Print the details of a book? \t2.Exit (Answer in 1/2) \n");
scanf("%d",&ans);

if(ans==1)
	{
	ands();}
	else { exit(0);
	}
}
}


void ands()
{ struct book{
char title[20],author[20],genre[20];
};
struct book no1;
char ok[2];
	printf("\nEnter the details of the book below: ");
		printf("\n-----------------------------------------------------\n");	
gets(ok);

    printf("1.Title \t");
	gets(no1.title);
	printf("\n2.Author\t");
	gets(no1.author);
	printf("\n3.Genre \t");
		gets(no1.genre);
	printf("\n-----------------------------------------------------\n");	
	printf("Here are the details of the book:\n\n 1.Title- %s\t2.Genre- %s\t3.Author- %s ",no1.title,no1.genre,no1.author);
		printf("\n-----------------------------------------------------\n");	
}
