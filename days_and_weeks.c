//Program to finding how many days and how many weeks has passed
//between the dates 01/01/92 to 31/5/92
//also finding how many days could not get evened out into weeks.

#include<stdio.h>
void main()
{
    int days,weeks,leftoverdays;
    days=31+29+31+30+31;
    weeks=days/7;
    leftoverdays=days%7;

    printf("days=%d\n",days);
    printf("weeks=%d\n",weeks);
    printf("Leftoverdays=%d\n",leftoverdays);
}



