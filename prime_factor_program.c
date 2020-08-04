
//Program to obtain the prime factor of the number
//Example-prime factor of 24 are 2,2,2 and 3.

#include<stdio.h>
void primefactor(int n);
int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d",&num);

    printf("prime factor of %d is: \n",num);
    primefactor(num);
    printf("\n");
}
void primefactor(int n)
{
    int i=2;
    while(n!=1)
    {
        if(n%i==0)
        {
            printf("%d",i);
            n=n/i;
        }
        else
        {
            i++;
            continue;
        }
    }
}
