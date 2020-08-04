
//Here is an ecological simulation of wolf and rabbit populations.Rabbit eats grass,Wolves eats rabbits.
//there is plenty of grass,so wolves are the only obstacle to the rabbit population increase.
//The wolves population increase with the population of rabbits.
//The day by day changes in the rabbit population R and the wolves population W can be expressed by the following formula.

//R(tomorrow)=(1+a)*R(today)-c*R(today)*W(tomorrow)
//W(tomorrow)=(1-b)*W(today)+c*d*R(today)*W(today)

//a=0.01-fractional increase in rabbit population without threat from wolves(0.01 means 1% increase)
//b=0.005-fractional decrease in wolf population without rabbit to eat.
//c=0.00001-likelihood that a wolf will encounter and eat a rabbit
//d=0.01-fractional increase in wolf population attributed to a devoured rabbit.

//assume that initially there are 10000 rabbits and 1000 wolves
//program to calculate populations of rabbits and wolves over a 1000 day period
//have a program print the populations every 25 days.

#include<stdio.h>
void main()
{
    float a=0.01,b=0.005,c=0.00001,d=0.01;
    int r1=10000,w1=1000,r2,w2;
    int i;


    for(i=1; i<=1000; i++)
    {
        r2=(1+a)*r1-c*r1*w1;
        w2=(1-b)*w1+c*d*r1*w1;

        if( i%25 == 0)
        printf("After %d days R=%d W=%d\n",i,r2,w2);

        r1=r2;
        w1=w2;
    }
}
