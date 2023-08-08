#include<stdio.h>

int main() {

    int cp;
    printf("Enter the number of CPs: "); scanf("%d", &cp);
    int sp;
    printf("Enter the number of SPs: "); scanf("%d", &sp);
    if (sp>cp)
    {
        printf("Profit");
    }
    else if (sp==cp)
    {
        printf("No profit, No loss");
    }
    
    else{
        printf("Loss");
    }


    return 0;
}