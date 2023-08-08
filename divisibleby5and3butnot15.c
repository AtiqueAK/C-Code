#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    if (a % 5 == 0 || a % 3 == 0)
    {
        if (a % 15 != 0)
        {
            printf("the given number is divisible by 3 and 5 but not 15");
        }
        else
        {
            printf("the given number is divisible by 3, 5 and 15");
        }
    }
    else
    {
        printf("the given number is not divisible by 3 and 5");
    }

    return 0;
}
