
//Program to obtain the Determinant value of the matrix.

#include<stdio.h>
#include<stdlib.h>

int detmat (int *arr,int order);
int main()
{
    int n,i,j,pos,num,val;
    int *arr;

    printf("Enter the value of n for n*n matrix: ");
    scanf("%d",&n);
    arr=(int *)calloc(n*n,4);

    printf("Enter values for %d * %d matrix: \n",n,n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&num);
            pos=i*n+j;
            arr[pos]=num;
        }
    }
    val=detmat(arr,n);
    printf("Determinant value=%d",val);
    free(arr);
}
int detmat (int *arr,int order)
{
    int i,j,k,newsize,count,pos,newpos,sum=0,sign=1;
    int *arr2;

    if(order==1)
        return (arr[0]);

    for(i=0; i<order; i++,sign=sign*-1)
    {
        newsize=(order-1)*(order-1);
        arr2=(int *)calloc(newsize,4);

        for(j=0; j<order; j++)
        {
            for(k=0,count=0; k<order; k++)
            {
                if (k==i)
                    continue;

                pos=j*order+k;
                newpos=(j-1)*(order-1)+count;
                arr2[newpos]=arr[pos];
                count++;
            }
        }
        sum=sum+arr[i]*sign*detmat(arr2,order-1);
        free(arr2);
    }
    return(sum);
}
