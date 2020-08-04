
//Miniaturization Unlimited sells 5 types of memory chips through it's retail outlets in 10 cities.
//the weekly sales of the company are stored in a 5*10*7 array
//SALES such that SALES(L,K,M) denotes the sales of the L th memory chip in the k th city on the M th day of the week.
//Program that computes.
//The total weekly sale of each type of memory chip.
//The total weekly sale in each city and the average daily sale of the company.

#include<stdio.h>
int main()
{
    int sales[5][10][7];
    int i,j,k;
    float wk_chip,avg_dsales,wk_city;

    for(i=0; i<5; i++)
    {
        printf("chip number:%d \n",i);
        wk_chip=0;
        for(j=0; j<10; j++)
        {
            printf("city number:%d \n",j);
            printf("Enter weekly sale day by day\n");

            for(k=0; k<7; k++)
            {
                scanf("%d", &sales[i][j][k]);
                wk_chip += sales[i][j][k];
            }
        }
        printf("chip number %d sales=%f\n",i,wk_chip);
        avg_dsales += wk_chip;
    }
    avg_dsales/=7;
    printf("average daily sales=%f\n",avg_dsales);

    for(j=0; j<10; j++)
    {
        wk_city=0;
        for(i=0; i<5; i++)
        {
            for(k=0; k<7; k++)
                wk_city += sales[i][j][k];
        }
        printf("city number %d sales = %f\n",j,wk_city);
    }
}
