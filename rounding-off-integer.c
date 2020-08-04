
//Program to round off an integer i to the next largest multiple of another integer i.

#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter the values of i and j\n");
    scanf("%d%d",&i,&j);
    k=i+j-i%j;
    printf("Next largest multiple of %d=%d",i,k);
    return 0;


}
