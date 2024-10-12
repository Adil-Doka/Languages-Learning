#include <stdio.h>

int* sum(int a, int b){
    int sum=a+b;//int*sum=a+b; runs but throws error && Sum=18
    printf("The sum is: %d\n",sum);
    printf("The adress of sum is: %u\n",&sum);
    // return &sum; errors
    int* ptr=&sum;
    return ptr;
}

int main(){
    int a=10,b=8;
    int* ptr=sum(a,b);
    printf("The Address  of sum is %u\n",ptr);
    printf("The sum is %d\n",*ptr);//not getting the sum?


return 0;
}