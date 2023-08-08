#include<stdio.h>

int main()
{
    int a,b,r,q;
    printf("Enter 1st No: ");
    scanf("%d",&a);
    printf("Enter 2nd No: ");
    scanf("%d",&b);
    // q=a/b;
    // r = a - b*q; //Divisor * Quotient + Remainder = Divident
    // printf(" The Remainder When %d is divided by %d is: %d", a,b,r);
    r = a % b;
    printf(" The Remainder When %d is divided by %d is: %d", a,b,r);
    return 0;
}