
//Program to interchange the contents of a and b without using a third variable.

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);

    printf("Before interchanging\n");
    printf("a=%d b=%d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After interchanging\n");
    printf("a=%d b=%d\n",a,b);
}
