#include<stdio.h>
main()
{
	//Collect age name and number and print them back. --------------------------Task1
char name[20];
char number[10];
int age=0;
int answer=0;
printf("What is your name? \n");
gets(name);
printf("What is your Mobile Number (maximum 10 digits)?\n");
gets(number);
printf("What is your age?\n");
scanf("%d",&age);
printf("------------------------------------------------------------------- \n");
printf("Hey %s, your mobile number is %s and your age is %d :)\n", name, number,age);
printf("------------------------------------------------------------------- \n");
printf("Isn't that correct? (Write the answer in 1.yes or 2.no)\n");
scanf("%d",&answer);
if(answer==1)
{printf("\nI am a magician after all B|");
}
else{ printf("\nOopsie Doopsie ");
}
}
