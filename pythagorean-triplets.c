
//Program to find all such Pythagorean triplets for all odd numbers in the range 1 to 10.

#include<stdio.h>
int main()
{
    unsigned int i,j,k;

        for(i=0; i<=9; i+2)
        {
            for(j=1; 1 ; j++)
            {
                k=j+1;
                if(i*i+j*j==k*k)
                {
                    printf("%u %u %u",i,j,k);
                    break;
                }
            }
        }
}
