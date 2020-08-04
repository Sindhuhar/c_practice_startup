
//The first difference D1 of a sequence A of N elements is obtained by Subtracting each elements except the last
//from the next element in the array.
//The second difference D2 is defined as the first difference of D1 and so on..
//ex- A:1,2,4,7,11,16,22 then
//D1:1,2,3,4,5,6
//D2:1,1,1,1,1
//D3:0,0,0,0

//Program that reads a sequence of 25 elements in an array and find it's first,second and third difference.

#include<stdio.h>
int main()
{
    int a[25],d1[24],d2[23],d3[22];
    int i;

    printf("Enter 25 numbers:\n");
    for(i=0; i<=24; i++)
    scanf("%d",&a[i]);

    printf("\nD1: ");
    for(i=0; i<=23; i++)
    {
        d1[i]=a[i+1]-a[i];
        printf("%d ",d1[i]);
    }
    printf("\nD2: ");
    for(i=0; i<=22; i++)
    {
        d2[i]=d1[i+1]-d1[i];
        printf("%d ",d2[i]);
    }
    printf("\nD3: ");
    for(i=0; i<=21; i++)
    {
        d3[i]=d2[i+1]-d2[i];
        printf("%d ",d3[i]);
    }
    printf("\n");
}
