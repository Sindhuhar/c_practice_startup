
//Program to calculate the value of a raised to b (power (a,b))

#include<stdio.h>
int power(int a, int b);
int main()
{
    int x,y,p;
    printf("Enter x and y: ");
    scanf("%d %d",&x,&y);
    p=power(x,y);
    printf("%d raised to %d = %d\n",x,y,p);
}
int power(int a, int b)
{
    int i, prod=1;
    for(i=1; i<=b; i++)
    {
        prod=prod*a;
    }
    return (prod);
}
