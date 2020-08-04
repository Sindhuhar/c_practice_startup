
//the equation x+y=r represents a circle with Center at origin and radius r
//Program that reads r from the keyboard and prints the number of points with integer coordinates that lie within the circle.

#include<stdio.h>
void main()
{
    float r;
    int x,y,points=0;

    printf("Enter the radius of the circle: ");
    scanf("%f",&r);

    for(x=0; x<=r; x++)
    {
        for(y=1; y<=r; y++)
        {
            if((x*x+y*y)<=r*r)
                points++;
        }
    }
    points=points*4+1;
    printf("Number of points inside the circle=%d\n",points);

}
