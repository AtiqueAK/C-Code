#include<stdio.h>

int main()
{
    float principle,rate,time,simpleinterest;
    printf("Enter Principle : ");//Principle of Interest
    scanf("%f",&principle);//Input the value for Principal
    printf("Enter Rate of Interest: ");//Rate of Interest
    scanf("%f",&rate);//input rate of interest percentage as a decimal number eg-3%
    printf("Enter Time in Years : ");//Time in Years
    scanf("%f",&time);//input time period (in years)
    simpleinterest=(principle*rate*time)/100;//Simple Interest
    printf("%f",simpleinterest);

    return 0;
}
