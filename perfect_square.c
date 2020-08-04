
//Program which finds a four digit number AABB which is a perfect square. A and B represents different digits.

#include<stdio.h>
#include<math.h>
void main()
{
    int i,num,d1,d2,d3,d4,a;

    for(i=1100; i<=9988; i++)
    {
        num=i;
        d4=num%10;
        num=num/10;
        d3=num%10;
        num=num/10;
        d2=num%10;
        num=num/10;
        d1=num%10;

        if(d1==d2 && d3==d4 && d1!=d3)
        {
            a=sqrt((float)i);
            if(i==a*a)
                printf("number=%d  perfect square=%d\n",a,i);
        }
    }
}
