#include <stdio.h>
int main()
{
    int a, b, c;

		printf("Enter number of rows you want in reverse:(press 0 to exit) ");
    scanf("%d",&c);
    if(c>0)
    
    {for(a=c; a>=1; --a)
    {
        for(b=1; b<=a; ++b)
        {
            printf("%d ",b);
        }
        printf("\n");
    } printf("\n---------------------------------------------\n");}
    else if(c=0);
    { exit(0);
	}


}
