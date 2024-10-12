#include <stdio.h>

// int change(int a); through errors
// not compulsory if you'r are defining the funtion before void main

void change(int);//vairable name is not necessary here 

void change(int a)//vairable name is must
{
    a = 20;
    printf("a=%d\n", a);
    // return a;
    //  or return 0;
    //  through errors but code runs
}
void main()
{
    int b = 10, c;

    change(b); // c=change(b) "Through errors" and didn't runs
    printf("b=%d\n& c=%d", b, c);
}