
//Program that,for all positive integers i,j,k and l from 1 through 1000
//find and prints all combinations of i,j,k and l such that i+j+k=l and i<j<k<l

#include<stdio.h>
void main()
{
    int i,j,k,l;

    for(l=1;l<=1000;l++)
    {
        for(k=1;k<l;k++)
        {
            for(j=1;j<k;j++)
            {
                for(i=1;i<j;i++)
                    if(i+j+k==l)
                        printf("%d+%d+%d=%d\n",i,j,k,l);
            }
        }
    }
}
