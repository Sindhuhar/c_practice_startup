
//Super-Duper Micros currently sells 100 Super-Dupers per month at a profit of Rs.500/- per super-duper.
//they have a fixed operating cost of Rs.10000/-that does not depend on the volume of sales
//they currently spend Rs.1000/- per month on advertising.
//A marketing consultant advise them that if they double the amount spent on advertising,sales will increase by 20%.

//Program that begins with the company's current status
//and successively doubles the amount spent on advertising until the net profit begins to decline.
//Have the program print the number of super-duper sales,the advertising budget
//and the net profit just before the profit begins to decline.

#include<stdio.h>
int main()
{
        float opecost=10000,pps=500,adv=1000,currentprofit,newprofit;
        int sale=100;

        currentprofit=(sale*pps)-(opecost+adv);

        while(1)

        {
            adv*=2;
            sale=sale*(100+20)/100;
            newprofit=(sale*pps)-(opecost+adv);

            if(newprofit<currentprofit)
                break;
            currentprofit=newprofit;
        }

        printf("sales=%d\n",sale);
        printf("advertising budget=%f\n",adv);
        printf("profit=Rs.%f\n",currentprofit);
}
