
//Write a function to obtain the first 25 numbers of a Fibonacci sequence.
//in a Fibonacci sequence the sum of two successive terms gives the third term.

#include<stdio.h>
void fibo(int old, int current);
int main()
{
    int old=0, current=1, newterm;
    printf("Fibonacci sequence: ");
    printf("%d %d ",old,current);
    fibo(old,current);
}
void fibo(int old, int current)
{
    static int numterms=2;
    int newterm;

    if(numterms<20)
    {
         newterm=old+current;
         printf("%d ",newterm);
         numterms++;
         fibo(current,newterm);
    }
    else
        return ;


}
