//WAP to take input from user and print "HH:TT" on the screen.
#include<stdio.h>
main()
{
    int hour,min;
    printf("HH:MM\n");
    scanf("%d:%d",&hour,&min);
    printf("%d Hour and %d Minute",hour,min);
    return 0;

}