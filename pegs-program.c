
//there are three pegs labeled A,B and C four disks are placed on peg A
//The bottom most disk is largest,and disk go on decreasing in size with the topmost disk being smallest
//The objective of the game is to move the disk from peg A to peg C using peg C as an auxiliary peg
//the rules of the game are as follows
//a) only one disk may be moved at a time, and it it must be the top disk on one of the pegs
//b) A larger disk should never be placed on the top of the smallest disk.

//Program to print out the sequence of which the disk should be moved such that all disks on peg A are finally transferred to peg C

#include<stdio.h>
void move(int n, char sp, char ap, char ep);
int main()
{
    int n=4;
    move(n,'A','B','C');
}
void move(int n, char sp, char ap, char ep)
{
    if(n==1)
        printf("move from %c to %c\n",sp,ep);
    else
    {
        move(n-1, sp, ep, ap);
        move(1,sp,' ',ep);
        move(n-1, ap, sp, ep);
    }
}
