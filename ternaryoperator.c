#include<stdio.h>
int main() {

    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    //ternary operator
    //exp 1 ? exp 2 : exp 3
    n%2==0 ? printf("Even number") : printf("Odd number") ;

    return 0;
}