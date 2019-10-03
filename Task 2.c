#include<stdio.h>
main()
{//Convert Temperature from Celsius to Fahrenheit---------------------------------- Task2
float celsius=0.00;
float fahrenheit= 0.00;
printf("What's the temperature outside in celcius?\n");
scanf("%f",&celsius);
fahrenheit= celsius*9/5+32;
printf("----------------------------------------------------------------------\n");
printf("The temperature outside in fahrenheit is %f\n",fahrenheit);
printf("----------------------------------------------------------------------\n");
if(fahrenheit>=104)
{printf("You getting tanned today for sure.");
}
else{printf("Enjoy a walk outside!");
}
	
	
}
