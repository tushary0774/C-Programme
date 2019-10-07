#include <stdio.h>
 main()
{
    char first[100], last[100], a, b;
    printf("Enter Your first name :\t ");
    scanf("%s", first);
    printf("Enter Your last name  :\t ");
    scanf("%s", last);
    // calculate the length of string s1
    // and store it in i
    for(a= 0; first[a] != '\0'; a++);
    for(b = 0; last[b] != '\0'; b++, a++)
    {
        first[a] = last[b];
    }
    first[a] = '\0';
    printf("Your full name is : %s", first);
    getch();
}
