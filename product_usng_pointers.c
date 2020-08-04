
//Write a function which receives a float and an int from main()
//finds the product of these two and returns the product which is printed through main()

#include<stdio.h>
float product(float xx, int yy);
int main()
{
    float x,z;
    int y;

    printf("Enter the float and an integer: ");
    scanf("%f %d",&x,&y);

    z=product(x,y);
    printf("z=%f",z);
}
float product(float xx, int yy)
{
    float pp;
    pp=xx*yy;
    return(pp);
}
