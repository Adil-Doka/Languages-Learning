#include <stdio.h>

void main()
{
    int arr[4];
    char name[4] = {'a', 'd', 'i', 'l'};

    printf("Enter The Elements of The Aray:\n ");

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf(" The adress of The element %d in the Array is :%u\n", arr[i], &arr[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 4; i++)
    {
        printf(" The adress of The letter %c in the Array is :%u\n", name[i], &name[i]);
    }
}