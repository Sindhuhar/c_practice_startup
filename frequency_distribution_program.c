
//Assuming that the data consist of 50 positive integers in the range 1 to 25
//Program that prints the number of times each integers occurs in the data.

#include<stdio.h>
int main()
{
    int data[50];
    int i;
    static int freq[50];

    printf("Enter data:\n");

    for(i=0; i<50; i++)
    {
        scanf("%d",&data[i]);
        if(data[i]>=1 && data[i]<=45)
        freq[ data[i] ]= freq[ data[i] ]+1;
    }
    printf("frequency of occurance:\n");
    for(i=0; i<50; i++)
    {
        if(freq[i]!= 0)
            printf("%d-%d\n",i,freq[i]);
    }
}
