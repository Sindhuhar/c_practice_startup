
//Write a function that received by a student in 3 subjects and returns the average and percentage of the marks
//and call this function from main() and point the result in main().

#include<stdio.h>

void result(int m1, int m2, int m3, float *a, float *p);
int main()
{
    int m1,m2,m3;
    float avg, per;

    printf("Enter the three subject marks: ");
    scanf("%d %d %d",&m1,&m2,&m3);
    result(m1,m2,m3,&avg,&per);
    printf("Average=%f  percentage=%f\n",avg,per);
}
void result(int m1, int m2, int m3, float *a, float *p)
{
    *a=(m1+m2+m3)/3;
    *p=(m1+m2+m3)/3;
}
