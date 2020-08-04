//Program which finds four digit perfect squares where the number Represented by the first two digits
//and the number represented by the last two digits are also perfect squares.
#include<stdio.h>
#include<math.h>
void main()
{
    int i,a,d1,d2,d3,d4,x,y,nleft,nright,num;
    {
        for(i=1000;i<=9999;i++)
        {
            a=sqrt((float)i);
            if(i==a*a)
            {
                num=i;
                d4=num%10;
                num=num/10;
                d3=num%10;
                num=num/10;
                d2=num%10;
                num=num/10;
                d1=num%10;

                nleft=d1*10+d2;
                nright=d3*10+d4;
                x=sqrt((float)nleft);
                y=sqrt((float)nright);
                if(nleft==x*x && nright==y*y)
                    printf("desired number=%d\n",i);
            }
        }
    }

}
