
//Program to compute the greatest common divisor given by Euclid's algorithm.

#include<stdio.h>
int getgcd(int j, int k);
int main()
{
    int j,k,gcd;
    printf("Enter the value of j and k: ");
    scanf("%d %d",&j,&k);
    gcd=getgcd(j,k);
    printf("GCD of %d and %d is %d\n",j,k,gcd);
}
int getgcd(int j, int k)
{
    int temp,r,m,gcd;

    if(j==k)
        return j;
    if(k>j)
    {
        temp=j;
        j=k;
        k=temp;
    }
    while(1)
    {
        r=j/k;
        m=j-(r*k);

        if(j%k==0)
            gcd=k;
        if(m==0)
            break;

        j=k;
        k=m;
        gcd=m;
    }
    return (gcd);
}
