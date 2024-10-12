#include <stdio.h>

int change(int a);//not compulsory if you'r are defining the funtion before void main 
int change(int a){
    a=20;
    printf("a=%d\n",a);
    return 0;
}
void main()	{
    int b=10,c;

    c=change(b);
    printf("b=%d\n& c=%d",b,c);

}