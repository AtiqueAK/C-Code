#include<stdio.h>
int main() {

    double x1, y1, x2, y2, x3, y3;
    printf("Enter x1 value: ");
    scanf("%d", &x1);
    printf("Enter y1 value: ");
    scanf("%d", &y1);
    printf("Enter x2 value: ");
    scanf("%d", &x2);
    printf("Enter y2 value: ");
    scanf("%d", &y2);
    printf("Enter x3 value: ");
    scanf("%d", &x3);
    printf("Enter y3 value: ");
    scanf("%d", &y3);
    double m1,m2;
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    if(m1==m2)
    {
        printf("This is a stright line");
    }
    else{
        printf("This is not a stright line");
    }

    return 0;
}