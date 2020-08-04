
//program to interchange the contents of a and b.

#include<stdio.h>
void main()
{
    int a,b,t,i;
    i=1;
    while(i<=10)
    {
        printf("Enter the values of a and b\n");
        scanf("%d%d",&a,&b);
        t=a;
        a=b;
        b=t;
        printf("%d %d\n",a,b);
        i=i+1;
    }
}
