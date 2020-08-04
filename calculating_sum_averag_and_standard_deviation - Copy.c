
//Function, which receives 5 integer and returns the sum, average, standard deviation of these numbers
//call this function from main() and print the result in main().

#include<stdio.h>
#include<math.h>

void calc(int n1, int n2, int n3, int n4, int n5, double *s,double *a,double *sd);
int main()
{
    int n1,n2,n3,n4,n5;
    double sum, avg, stddev;

    printf("Enter five number: ");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    calc(n1,n2,n3,n4,n5,&sum,&avg,&stddev);
    printf("sum=%lf\naverage=%lf\nstandard deviation=%lf\n",sum,avg,stddev);

}
void calc(int n1, int n2, int n3, int n4, int n5, double *s,double *a,double *sd)
{
    *s=n1+n2+n3+n4+n5;
    *a=*s/5;
    *sd=sqrt((pow(n1-*a,2)+pow(n2-*a,2)+pow(n3-*a,2)+pow(n4-*a,2)+pow(n5-*a,2))/4);
}
