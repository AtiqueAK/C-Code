#include<stdio.h>
int main(){
    float r;
    printf("Enter the radius of sphere :");
    scanf("%d",&r);
    float v = 4 * 3.14 * r * r * r / 3;
    printf("The volume is : %f", v);

    return 0;

}
