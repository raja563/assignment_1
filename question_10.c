//WAP to print the date month and year with taking the input from user.
#include<stdio.h>
main()
{
    int day,month,year;
    printf("DD/MM/YY\n");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("Day-%d,Month-%d,Year-%d",day,month,year);
    return 0;
}