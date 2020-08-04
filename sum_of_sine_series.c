
//Program to calculate sum of sine series.

#include<stdio.h>

float numerator( float xx, int jj );
float denominator(int jj);
int main()
{
    float x,n,d,sum,term;
    int j,i;
    printf("Enter the value of x: ");
    scanf("%f",&x);

    sum=0;
    for(i=1; i<=10; i++)
    {
        j=2*i-1;
        n=numerator(x,j);
        d=denominator(j);
        term=n/d;
        if(i%2==0)
            sum=sum-term;
        else
            sum=sum+term;
    }
    printf("sum of sine series for x = %f is %f",x,sum);
}
float numerator( float xx, int jj )
{
    float p=1;
    int m;

    for(m=1; m<=jj; m++)
    p=p*xx;

    return(p);
}
float denominator(int jj)
{
    float p=1;
    int m;

    for(m=1; m<=jj; m++)
        p=p*m;
    return(p);
}
