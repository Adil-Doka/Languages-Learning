#include <stdio.h>

int main()
{
    int fact=1, i,num;
    printf("Eneter any numbe: \n");
    scanf("%d",&num);

        for (i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("factorial is : %d",fact);

    return 0;

}