#include<stdio.h>

int main(){
    int b=10;
    int a=&b;//throws error but run and stores the adres of b
    printf(" the vale of a and is %p %d\n",a,b);
    printf("the address of a and b is %p %p\n",&a,&b);


    int i=2;
    int* j=i;// error but stores 2
    printf("the value of i is %d\n",i); //2
    printf("the value of j is %d\n",j); //2
    printf("the value of j is %u\n\n\n",j); //2

    int l=69;
    int* k=&l;
    printf("the vaule of l and k is %d %u\n",l,k);
    printf("the address of l and k is %p %p\n",&l,&k);
    printf("the vaule of l and k is %d %u\n",*(&l),*(&k));

    return 0;
}