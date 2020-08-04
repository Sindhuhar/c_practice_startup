
//Program to add two 6*6 matrices.


#include<stdio.h>
int main()
{
    int a[6][6],b[6][6],c[6][6];
    int i,j;

    printf("Enter matrix a: \n");
    for(i=0; i<=5; i++)
    {
        for(j=0; j<=5; j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter matrix b: \n");
    for(i=0; i<=5; i++)
    {
        for(j=0; j<=5; j++)
            scanf("%d",&b[i][j]);
    }
    for(i=0; i<=5; i++)
    {
        for(j=0; j<=5; j++)
            c[i][j]=a[i][j]+b[i][j];
    }
    printf("Matrix c:\n");
    for(i=0; i<=5; i++)
    {
        for(j=0; j<=5; j++)
            printf("%d ",c[i][j]);
            printf("\n");
    }
    printf("\n");
}
