//Finding difference in two dates in terms of number of days.


#include<stdio.h>
int daysinmonth(int m, int y);
int main()
{
    int d1,m1,y1,d2,m2,y2,dm;
    int days=1;

    printf("Input first date(dd,mm,yy): ");
    scanf("%d %d %d",&d1, &m1, &y1);

    printf("Input second date(dd,mm,yy): ");
    scanf("%d %d %d",&d2, &m2, &y2);

    dm=daysinmonth(m1,y1);

    while(1)
    {
        days=days+1;
        d1=d1+1;
        if(d1>dm)
        {
            m1=m1+1;
            d1=1;

            if(m1>12)
            {
                y1=y1+1;
                m1=1;
            }
            dm=daysinmonth(m1,y1);
        }
        if(d1==d2 && m1==m2 && y1==y2)
            break;
    }
    printf("difference in dates=%d days",days);
}
int daysinmonth(int m, int y)
{
    int dm;

    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        dm=31;
    if(m==4 || m==6 || m==9 || m==11)
        dm=30;
    if(m==2)
    {
        if((y%400==0) || (y%100 != 0 && y%4==0))
            dm=29;
        else
            dm=28;
    }
    return(dm);
}



