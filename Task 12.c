#include<stdio.h>

// Task 12
int Celcius();
int Fahrenheit();

main(){
while(1)
{
int input;	
printf("What do you want to do? \n1.Convert Celsius to Fahrenheit\n2.Convert Fahrenheit to Celcius\n3.Exit\n (Enter the option in 1/2/3)\t Ans- ");
scanf("%d",&input);
switch(input)
{
	case 1: Celcius();
	break;
	case 2: Fahrenheit();
    break;
    case 3: exit(0);
    break;
    default: printf("\n---------------------------------------------------\nInvalid Input \n---------------------------------------------------\n");
}
}
	
}








int Celcius()
{ float cel,far;
    printf("\n---------------------------------------------------\n");

  printf("Enter the temperature in Fahrenheit :\t");
  scanf("%f",&far);
  cel= ((far-32)*5)/9;
  printf("The temperature in Celsius is %f degree celsius",cel);
    printf("\n---------------------------------------------------\n");

}

int Fahrenheit()
{ float cel,far;
    printf("\n---------------------------------------------------\n");

  printf("Enter the temperature in Celsius :\t");
  scanf("%f",&cel);
  far= ((cel*9)/5)+32;
  printf("The temperature in Fahrenheit is %f degree Fahrenheit",far);
  printf("\n---------------------------------------------------\n");
}
