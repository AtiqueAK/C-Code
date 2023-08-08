#include<stdio.h>

int main(){

    float x = 5.7;
    int y = x; //considering integer part of a float i.e 5
    float z = x-y;
    printf("%f\n",z);
    return 0;
}