#include<stdio.h>

int main()
{
    int number;
    printf("Enter a positive integer: "); //prompt user to enter an input
    scanf("%d", &number);   //read the value of entered input and store it in
    printf("The given input number is : %d",number);
    return 0;
}