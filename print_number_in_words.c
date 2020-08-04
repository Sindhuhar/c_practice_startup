
//program to print numbers in words.

#include<stdio.h>
void main()
{
    unsigned int num,num2,no_dig=0,p;
    int i;

    printf("Enter any positive integer: ");
    scanf("%d",&num);

    num2=num;

    do
    {
        no_dig++;
        num2=num2/10;
    }while(num2!=0);

    for( ;no_dig>0;no_dig--)
    {
        p=1;
        for(i=no_dig-1;i>0;i--)
        p=p*10;
        switch(num/p)
        {
            case 0:
                printf("zero\n");
                break;
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 4:
                printf("four\n");
                break;
            case 5:
                printf("five\n");
                break;
            case 6:
                printf("six\n");
                break;
            case 7:
                printf("seven\n");
                break;
            case 8:
                printf("eight\n");
                break;
            case 9:
                printf("nine\n");
                break;
        }
        num=num%p;
    }
}







