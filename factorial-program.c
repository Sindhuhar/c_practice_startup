
//Write a function to calculate the factorial value of any integer.

#include<stdio.h>
int factorial(int n);
int main()
{
     int num,fact;
     printf("Enter the number: ");
     scanf("%d",&num);

     fact=factorial(num);
     printf("The factorial of %d is %d\n",num,fact);
}
int factorial(int n)
{
    int i,f=1;
    for(i=1; i<=n; i++)
        f=f*i;
    return(f);
}
