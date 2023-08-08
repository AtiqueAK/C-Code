#include <stdio.h>
int main()
{

    int x, y;
    printf("Enter the co-ordinates :");
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0)
    {
        printf("Lies on origin");
    }
    else if (y == 0)
    {
        printf("Lies on x axis");
    }
    else if (x == 0)
    {
        printf("Lies on y axis");
    }
    else
    {
        printf("The points will not lie on x or y axis");
    }

    return 0;
}