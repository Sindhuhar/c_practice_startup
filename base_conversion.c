
//Program to display the number entered the base and the converted number.

#include<stdio.h>
void main()
{
    unsigned int num,num2,base,no_dig=0,p;
    int i;

    printf("Enter any positive integer and base: ");
    scanf("%d %d",&num,&base);
    printf("number=%d, base=%d, converted number= ",num,base);

    num2=num;

    do
    {
        no_dig++;
        num2=num2/base;
    }while (num2 != 0);

    for( ;no_dig>0;no_dig--)
    {
        p=1;
        for(i=no_dig-1;i>0;i--)
            p=p*base;
        if(base==16)
            printf("%x",num/p);
        else
            printf("%d",num/p);
        num=num%p;

    }
    printf("\n");

}
