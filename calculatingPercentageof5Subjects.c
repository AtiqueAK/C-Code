#include<stdio.h>

int main()
{
    float S1 = 54; //English Marks
    float S2 = 67; //Maths Marks
    float S3 = 88; //Science Marks
    float S4 = 69; //Social Science Marks
    float S5 = 98; //Hindi Marks

    float p = (S1+S2+S3+S4+S5) / 5; //percentage  of all subjects

    printf("Percentage of Student is : %f", p);

    return 0;
}
