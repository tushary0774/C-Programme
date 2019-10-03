#include<stdio.h>
main()
{//Collectiong marks of 5 subjects and displaying the result as well as average.------------------- Task 3
int marks[3];
int a=0;
int sum=0;
float avg=0.00;
printf("Enter the marks of the 3 subjects: (All the marks are out of 100)\n");
printf("----------------------------------------------------------------------\n");


for(a=0;a<=2;a++)
{ scanf("%d",&marks[a]);
sum=sum+marks[a];
}

avg= sum/3;
printf("The sum of all your marks is %d \n And the average is %f \n",sum,avg)	;
printf("----------------------------------------------------------------------\n");
if(avg>=41);
{if (avg>=91){
printf(" You really did come prepared!");
}
else if (avg>=81){ printf("Good Performance");

}
else if (avg>=65){ printf("Satisfactory");

}
else if (avg>=41){ printf("Come well prepared next time");

}
else{ printf("Sorry but you didn't make it'");

}
}

}
