
//Write a general purpose function to convert ant given year into it's roman equivalent
// Example- Roman equivalent of 1988 is mdcccclxxxviii
//Roman equivalent of 1525 is mdxxv

#include<stdio.h>
int romanise(int y, int k, char ch);
int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d",&year);

    year=romanise(year,1000,'m');
    year=romanise(year,500,'d');
    year=romanise(year,100,'c');
    year=romanise(year,50,'l');
    year=romanise(year,10,'x');
    year=romanise(year,5,'v');
    year=romanise(year,1,'i');
}
int romanise(int y, int k, char ch)
{
    int j,i;
    j=y/k;
    for(i=1;i<=j;i++)
        printf("%c",ch);

    return (y%k);
}
