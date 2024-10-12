#include <stdio.h>

int main()
{
    int num = 10;
    char L = 'A';
    float pi = 3.14;
    printf("number is: %d\n", num);
    printf("leeter is: %c\n", L);
    printf("pi is: %1.3f\n", pi);

    int *ptr1 = &num;
    char *ptr2 = &L;
    float *ptr3 = &pi;
    // there are different types of pointers for differnt types of datatypes
    printf("The address of number is: %d\n", ptr1);
    printf("The address of letter is: %c\n", ptr2);
    printf("The address of pi is: %1.3f\n", ptr3);

    printf("number is: %d\n", *ptr1);
    printf("leeter is: %c\n", *ptr2);
    printf("Value of pi is: %1.3f\n", *ptr3);

    return 0;
}