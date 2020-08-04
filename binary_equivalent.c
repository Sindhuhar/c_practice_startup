
//Program to find the binary equivalent of the number.

#include<stdio.h>
int binequ( int n );
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Binary equivalent of %d is  ", num);
    binequ(num);
    printf("\n");
}
int binequ( int n )
{
    int r;
    r=n%2;
    n=n/2;

    if(n==0)
    {
        printf("%d",r);
        return (r);
    }
    else
        binequ(n);

   printf("%d",r);
}
