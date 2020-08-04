
//Program to obtain the sum of the first ten terms of the following series
//x/x+1/2(x-1/x)^2+1/2(x-1/x)^3+1/2(x-1/x)^4+...........

#include<stdio.h>
float sum_series(float);
int main()
{
    float x;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("sum of first 10 terms=%f\n",sum_series(x));

}
float sum_series(float x)
{
    static int i=2;
    int j,k;
    float n,d;
    static float sum=1;

    if(i<=10)
    {
        j=i;
        n=d=1;
        for(k=1; k<=j; k++)
        {
            n=n*(x-1);
            d=d*x;
        }
        sum=sum+0.5*(n/d);
        i++;
        sum_series(x);
    }
    return (sum);
}
