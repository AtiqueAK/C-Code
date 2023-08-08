#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    if (a % 5 == 0)
    {
        if (a % 3 == 0)
        {
            printf("the given number is divisible by 3 and 5");
        }
        else
        {
            printf("the given number is only divisible by 5");
        }
    }
    else
    {
        printf("the given number is not divisible by 3 and 5");
    }

    return 0;
}
