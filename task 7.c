#include<stdio.h>
#include<string.h>
main()// ------------------------------------------------------- task 7
{
	char data[50],data1[50],i;
	printf("Enter the data: \n");
gets(data);
	
	    for(i = 0; data[i] != '\0'; ++i)
    {
        data1[i] += data[i];
    }
    data1[i] = '\0';
    
	strrev (data);
 
if(strcmp(data1,data)==0)
{printf(" \nThe word entered is a palindrome!");
}
else 
{printf("\nThe word unfortunately is not a palindrome :(");
}
}
