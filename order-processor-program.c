#include<stdio.h>
void main()
{
    int mptype;
    char customer;
    float famount,oamount,discount=0;

    printf("Enter mptype,customer type and oamount\n");
    scanf("%d %c %f",&mptype,&customer,&oamount);

    if(mptype==32)
    {
        if(customer=='u')
            discount=7.5;
        if(customer=='i')
        {
            if(oamount<50000)
                discount=5;
            else
                discount=7.5;
            if(oamount>100000)
                discount=10;
        }
        if(customer=='g')
        {
            if(oamount<50000)
                discount=6.5;
            else
                discount=8.5;
            if(oamount>100000)
                discount=10;
        }
    }
    if(mptype==16)
    {
        if(customer=='i' || customer=='u')
            discount=5;
        if(customer=='g')
            discount=6;
    }
    if(mptype==8)
        discount=10;

    famount=oamount-oamount*(discount/100);
    printf("mptype=%d customer=%c oamount=%f famount=%f",mptype,customer,oamount,famount);

}
