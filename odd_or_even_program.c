
//Program to calculate odd or even.

#include<stdio.h>
void main()
{
    int n,i;
    i=1;
    while(i<=10)
        {
            printf("enter the number: ");
            scanf("%d",&n);
            if(n%2==0)
            printf("%d is even\n",n);
            else
            printf("%d is odd\n",n);
            i=i+1;
        }


}
