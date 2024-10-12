#include <stdio.h>



int change(int a){
    a=20;
    printf("a=%d\n",a);
    return a;
}
void main()	{
    int b=10;


    printf("b=%d\n& c=%d",b,change(b));

}