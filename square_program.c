
//square of 12 is 144. 21 which is a reverse of 12 has a square 441 which is same as 144 reversed
//there are few numbers which have this property
//Program to find out whether any more such number exist in the range 10 to 100.

#include<stdio.h>
int getreverse(int n);
int main()
{
    int num,revnum,sqrnum,revsqrnum;

    for(num=10; num<=100; num++)
    {
        sqrnum=num*num;
        revnum=getreverse(num);
        revsqrnum=getreverse(sqrnum);

        if(revsqrnum==revnum*revnum)
            printf("%d %d %d %d\n",num,sqrnum,revnum,revsqrnum);
    }
}
int getreverse(int n)
{
    int d1,d2,d3,d4,d5,rnum;


    d5=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    n=n/10;

    rnum=d5*10000+d4*1000+d3*100+d2*10+d1;

    while(rnum%10==0)
        rnum=rnum/10;

    return (rnum);
}
