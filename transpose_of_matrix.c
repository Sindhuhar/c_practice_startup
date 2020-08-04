
//Program to obtain the Transpose of a 4*4 matrix
//The transpose of a matrix is obtained by exchanging the elements of each row with the elements of the corresponding column.

#include<stdio.h>
int main()
{
    int mat[4][4];
    int i,j,temp;

    printf("Enter a 4*4 matrix: \n");
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
            scanf("%d",&mat[i][j]);

    }
    printf("\nOriginal matrix: \n");
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
            printf("%d ",mat[i][j]);

        printf("\n");
    }
    for(i=0; i<=3; i++)
    {
        for(j=i+1; j<=3; j++)
        {
            temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
      printf("\nMatrix after transpose : \n");
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
            printf("%d ",mat[i][j]);

        printf("\n");
    }
}
