#include <stdio.h>

int main(){
    // int &a=123; error
    int a=10;
    // &a=5003;error
    // int* b=0061FF18; also error
    int* b=&a; //And '&' is compulsory 
    printf("Addres of a is %p\n",&a);
    printf("Addres of a is %p\n",b);
    printf("Addres of b is %p\n",&b);
    printf("Value of a is %d\n",a);
    printf("Value of a is %d\n",*b);
    printf("Value of b is %p\n",b);

return 0;
}