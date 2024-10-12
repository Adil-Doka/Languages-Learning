#include <stdio.h>

int change();

int change(int s,int a){
   a=20;
    printf("a=%d\n",a);
    return s;
}

// int change(int s){
//     s=50;
//     return s;
// } multiple fun with same name throw errors

void main()	{
    int b=10;

    printf("b=%d\n& c=%d",b,change(b,10));

}