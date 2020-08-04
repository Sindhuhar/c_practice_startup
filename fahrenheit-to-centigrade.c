
//Program to convert and print the temperature in centigrade degrees.


#include<stdio.h>
void main()
{
    float ft,ct;
    printf("Enter temperature in Fahrenheit degree: ");
    scanf("%f",&ft);
    ct=5.0/9.0*(ft-32);
    printf("Temperature in centigrade degrees=%f\n",ct);
    return 0;
}
