#include<stdio.h> 

// -------------------------------------------- task 9



  
int main() 
{ 
 int factorial( int n) 
      { 
         if (n == 0) 
           {
	     return 1;}
	     else{
	 
     return n * factorial(n - 1); 
 }
} 
while(1)
{

    int num ; 
    int a,ans;
    printf("Do you want to: \n1. Calculate a factorial \t2.Exit \n");
    scanf("%d",&ans);
       printf("-------------------------------------\n");
    if(ans==1)
    {
	printf("\nEnter the number:\n");
    scanf("%d",&num);
    if(num<0)
    {printf("The number you entered is negative please restart the program!");
     return 0; 
	}
    printf("-------------------------------------\n");
     printf("\nFactorial of %d is %d", num, factorial(num)); 
     printf("\n\nCalculations: \n%d!= ",num);
     
for(a=num;a>=1;a--)
{  
if(a==1){
printf("%d ",a);}
else
{printf("%d* ",a);
}
}
 printf("\n-------------------------------------\n");
}
else { exit(0);
}
} 
}
