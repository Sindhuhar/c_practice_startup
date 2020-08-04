
//consider a currency system in which there are notes of seven denominations,namely
//Rs.1,Rs.2,Rs.5,Rs.10,Rs.50,Rs.100
//if a sum of Rs.N entered through the keyboard
//Program to compute the smallest number of notes that will combine to give Rs.N

#include<stdio.h>
void denom(int *s, int *n, int c);
int main()
{
    int sum,notes=0;

    printf("Enter the sum of Rupees: ");
    scanf("%d",&sum);

    denom(&sum, &notes, 100);
    denom(&sum, &notes, 50);
    denom(&sum, &notes, 10);
    denom(&sum, &notes, 5);
    denom(&sum, &notes, 2);
    denom(&sum, &notes, 1);

    notes=notes+sum;
    printf("Smallest number of notes=%d\n",notes);
}
void denom(int *s, int *n, int c)
{
    *n= *n + *s/c;
    *s=*s%c;
}
