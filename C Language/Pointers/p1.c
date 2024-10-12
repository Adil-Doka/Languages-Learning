#include <stdio.h>

int main(){    
    int i=4;
    int *j=&i;
    // int *j=i; error

    printf("%d\n%p",i,j);
    // %p & %u both applicable, p for hexadecimal and u for decimal


return 0;
}