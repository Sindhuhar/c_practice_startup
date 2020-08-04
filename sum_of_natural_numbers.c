
//Program to obtain the running sum of first 25 natural numbers.

#include<stdio.h>
int getsum( int n);
int main()
{
    int s;
    s=getsum(0);
    printf("The sum of first 25 natural number is = %d ",s);

}
int getsum( int n)
{
    int sum=0;

    if(n==25)
        return (sum);
    else
        sum=n+getsum(++n);
        return (sum);

}
