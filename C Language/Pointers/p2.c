#include <stdio.h>

int main(){
    int i=10;
    int *j;
    // int j;
    // *j=&i; error
    j=&i;
    // j=10; 
    // j=i;throws eror but runs &output is j=10
    printf("%d\n%u",i,j);
    // printf("%u\n%u",*i,&j);//eror


return 0;
}