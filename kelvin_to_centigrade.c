
//Program to convert and print the temperature from kelvin to centigrade degrees.

#include<stdio.h>
int main()
{
    float kt,ct;
    printf("Enter temperature in kelvin: ");
    scanf("%f",&kt);
    ct=kt-273.15;
    printf("Temperature in centigrade=%f\n",ct);
    return 0;
}
