#include<stdio.h>
int main() {

    int l;
    printf("Enter length : "); scanf("%d",&l);
    int b;
    printf("Enter breath : "); scanf("%d",&b);
    float area = l*b;
    int p = 2 * (l+b);

    if (area>p)
    {
        printf("area is greater than perimeter");
    }

    else if (p>area)
    {
        printf("Perimeter is greater than area");
    }

    else
    {
        printf ("Area and Perimeter are equal.");
    }
    
    
    
    return 0;
}