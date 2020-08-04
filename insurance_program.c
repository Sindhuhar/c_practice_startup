//The following rules enable an insurance company to determine the type of motor insurance to issue
//and the cost of the premium with any excesses to it's clients

//if the age of the driver is 25 years or more, the car is manufactured in India
//and the accident record of the car is good the premium charged is 6% of the declared value of the car
//and a comprehensive policy is issued, if the accident record is not good
//the premium is raised to 7%, the policy holder pays the first 100 rupees of a claim and comprehensive policy is issued.

//if the age of the driver is 25 years or more, the car is not manufactured in India and the accident record of the car is good.
//the policy holder pays first 100 rupees of any claim and a comprehensive policy of 6% premium is issued
//if the above conditions apply except that the accident record is not good
//the premium is raised to 7% and a third party policy is issued.

//if the age of the driver is less than 25 years, the car is manufactured in India and the accident record of the car is good
//the premium charged is 6% of the declared value of the car
//and a comprehensive policy is issued with the holder paying the first 100 rupees of a claim
//if the accident record of the car is not good 7% premium and comprehensive policy is issued.

//if the age of the driver is less than 25 years,the car is not manufactured in India and the accident record of the car is good
//the premium charged is 8% of the declared value of the car the policy holder pays the first 100 rupees of any claim and comprehensive policy issued
//if the accident record is not good and all other conditions apply
//them considering the risk, No policy can be take out.

//assume that if a person not had an accident in the last three years then the car is considered good
//program to output of type of motor insurance policy and amount of premium
//and excess payable on=any claim if applicable.

#include<stdio.h>
void main()
{
    int acc,age,excess=0;
    float cost,amt,prper;
    char inout,type;

    printf("Enter age of the driver\n");
    scanf("%d",&age);

    printf("Enter number of accidents\n");
    scanf("%d",&acc);

    printf("Enter cost of the car\n");
    scanf("%f",&cost);

    printf("car is manufactured inside or outside India(i/o)\n");
    fflush(stdin);
    scanf("%c",&inout);

    if(age>=25)
    {
        if(inout=='i')
        {
            if(acc==0)
                prper=6;
            else
                prper=7;
                excess=100;
                type='c';
        }
        else
        {
            if(acc==0)
            {
                prper=6;
                excess=100;
                type='c';
            }
            else
            {
                prper=7;
                excess=100;
                type='t';
            }
        }
    }
    else
    {
        if(inout=='i')
        {
            if(acc==0)
            {
                prper=6;
                excess=100;
                type='c';
            }
            else
            {
                prper=7;
                excess=100;
                type='t';
            }

        }
        else
        {
            if(acc==0)
            {
                prper=8;
                excess=100;
                type='c';
            }
            else
            {
                prper=8;
                excess=100;
                type='r';
            }
        }
    }

    amt=cost*prper/100;
    printf("\nc-comprehensive policy  t-third party\n");
    printf("r-Risk,no policy\n");
    printf("\namount of premium=%f\n",amt);
    printf("type of insurance policy=%c\n",type);

    if(excess!=0)
        printf("excess amount on claim=%d\n",excess);



}
