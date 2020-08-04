
//program to finding the number of digits in the number.
//the number may contain 1,2,3,4 or 5 digits.

#include<stdio.h>
void main()
{
    int n,count=1;
    printf("Enter the number: ");
    scanf("%d",&n);


    n=n/10;
    if(n!=0)
        count=count+1;

    n=n/10;
    if(n!=0)
        count=count+1;

    n=n/10;
    if(n!=0)
        count=count+1;

    n=n/10;
    if(n!=0)
        count=count+1;

    printf("Number of digits=%d",count);
}
