
//Program to determine whether the year is leap year or not.

#include<stdio.h>
int isleap(int y);
int main()
{
    int year,result;

    printf("Enter year: ");
    scanf("%d",&year);

    result=isleap(year);
    if(result==1)
        printf("%d is leap year\n",year);
    else
        printf("%d is not leap year\n",year);
}
int isleap(int y)
{
    if((y%400==0) || (y%100 != 0) && (y%4==0))
        return (1);
    else
        return (0);
}
